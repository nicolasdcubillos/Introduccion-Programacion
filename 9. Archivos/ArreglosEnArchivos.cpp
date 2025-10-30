#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string apellido;
    int edad;
};

int main() {
    string nombreArchivo = "personas.txt";
    int MAX_PERSONAS = 5;
    Persona personas[MAX_PERSONAS];
    int cantidad = 0;

    ofstream archivoSalida(nombreArchivo);

    if (archivoSalida.is_open()) {
        cout << "Ingrese datos de las personas (maximo " << MAX_PERSONAS << "):\n";

        for (int i = 0; i < MAX_PERSONAS; i++) {
            cout << "\nPersona " << i + 1 << endl;
            cout << "Nombre: ";
            cin >> personas[i].nombre;
            cout << "Apellido: ";
            cin >> personas[i].apellido;
            cout << "Edad: ";
            cin >> personas[i].edad;

            archivoSalida << personas[i].nombre << " "  << personas[i].apellido << " " << personas[i].edad;

            cantidad++;
            char continuar;
            cout << "Desea ingresar otra persona? (s/n): ";
            cin >> continuar;
            if (continuar == 'n' || continuar == 'N') {
                cout << endl;
                break;
            }
        }

        archivoSalida.close();
        cout << "\nDatos guardados correctamente.\n";
    } else {
        cout << "No se pudo abrir el archivo para escritura.\n";
        return 1;
    }

    ifstream archivoEntrada(nombreArchivo);
    if (archivoEntrada.is_open()) {
        cout << "\nLeyendo datos desde el archivo:\n";

        int i = 0;
        while (!archivoEntrada.eof()) {
            archivoEntrada >> personas[i].nombre >> personas[i].apellido >> personas[i].edad;
            i++;
        }
        archivoEntrada.close();

        cout << "\nPersonas leídas:\n";
        for (int j = 0; j < i; j++) {
            cout << j + 1 << ". " << personas[j].nombre << " " << personas[j].apellido << ", Edad: " << personas[j].edad << endl;
        }
    } else {
        cout << "No se pudo abrir el archivo para lectura.\n";
        return 1;
    }

    return 0;
}
