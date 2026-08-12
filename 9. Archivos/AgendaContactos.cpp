#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Ejemplo complejo: agenda de contactos guardada en un archivo de texto.
// Combina estructuras, funciones, archivos (escritura/lectura) y un menu con do-while.

struct Contacto {
    string nombre;
    string telefono;
    int edad;
};

const string ARCHIVO = "agenda.txt";

// Agrega un contacto al final del archivo (modo append)
void agregarContacto() {
    Contacto c;
    cout << "Nombre: ";
    cin >> c.nombre;
    cout << "Telefono: ";
    cin >> c.telefono;
    cout << "Edad: ";
    cin >> c.edad;

    ofstream salida(ARCHIVO, ios::app);
    if (salida.is_open()) {
        salida << c.nombre << " " << c.telefono << " " << c.edad << endl;
        salida.close();
        cout << "Contacto guardado correctamente." << endl;
    } else {
        cout << "No se pudo abrir el archivo para escritura." << endl;
    }
}

// Lee y muestra todos los contactos del archivo
void listarContactos() {
    ifstream entrada(ARCHIVO);
    if (!entrada.is_open()) {
        cout << "Aun no hay contactos guardados." << endl;
        return;
    }

    Contacto c;
    int total = 0;
    cout << "\n--- Lista de contactos ---" << endl;
    while (entrada >> c.nombre >> c.telefono >> c.edad) {
        total++;
        cout << total << ". " << c.nombre << " | Tel: " << c.telefono
             << " | Edad: " << c.edad << endl;
    }
    entrada.close();

    if (total == 0) {
        cout << "(agenda vacia)" << endl;
    } else {
        cout << "Total de contactos: " << total << endl;
    }
}

// Busca un contacto por nombre recorriendo el archivo
void buscarContacto() {
    string buscado;
    cout << "Nombre a buscar: ";
    cin >> buscado;

    ifstream entrada(ARCHIVO);
    if (!entrada.is_open()) {
        cout << "Aun no hay contactos guardados." << endl;
        return;
    }

    Contacto c;
    bool encontrado = false;
    while (entrada >> c.nombre >> c.telefono >> c.edad) {
        if (c.nombre == buscado) {
            cout << "Encontrado: " << c.nombre << " | Tel: " << c.telefono
                 << " | Edad: " << c.edad << endl;
            encontrado = true;
        }
    }
    entrada.close();

    if (!encontrado) {
        cout << "No se encontro ningun contacto con ese nombre." << endl;
    }
}

int main() {
    int opcion;

    do {
        cout << "\n=== AGENDA DE CONTACTOS ===" << endl;
        cout << "1. Agregar contacto" << endl;
        cout << "2. Listar contactos" << endl;
        cout << "3. Buscar contacto" << endl;
        cout << "0. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarContacto();
                break;
            case 2:
                listarContactos();
                break;
            case 3:
                buscarContacto();
                break;
            case 0:
                cout << "Saliendo de la agenda..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
                break;
        }

    } while (opcion != 0);

    return 0;
}
