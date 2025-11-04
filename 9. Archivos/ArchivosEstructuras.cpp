#include <iostream>
#include <fstream>

// Programa que almacene nombreUsuario, clave, edad y cargo

using namespace std;

struct Usuario {
    string nombreUsuario;
    string clave;
    int edad;
    string cargo;
};

void llenarDatos(Usuario usuarios[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el nombre del usuario: ";
        cin >> usuarios[i].nombreUsuario;
        cout << "Ingrese la clave del usuario: ";
        cin >> usuarios[i].clave;
        cout << "Ingrese la edad del usuario: ";
        cin >> usuarios[i].edad;
        cout << "Ingrese el cargo del usuario: ";
        cin >> usuarios[i].cargo;
    }
}

void imprimirDatos(Usuario usuarios[], int tam) { 
    for (int i = 0; i < tam; i++) {
        cout << "Datos de la persona " << i + 1 << endl;
        cout << usuarios[i].nombreUsuario << endl;
        cout << usuarios[i].clave << endl;
        cout << usuarios[i].edad << endl;
        cout << usuarios[i].cargo << endl;
    }
}

void escribirDatosArchivo(Usuario usuarios[], int tam) {
    ofstream archivo("usuarios.txt");
    for (int i = 0; i < tam; i++) {
        archivo << usuarios[i].nombreUsuario << endl;
        archivo << usuarios[i].clave << endl;
        archivo << usuarios[i].edad << endl;
        archivo << usuarios[i].cargo << endl;
    }
    archivo.close();
}

int leerDatosArchivo(Usuario usuarios[]) {
    ifstream archivo("usuarios.txt");
    int i = 0;
    if (archivo.is_open()) {
        while (!archivo.eof()) {
            archivo >> usuarios[i].nombreUsuario;
            archivo >> usuarios[i].clave;
            archivo >> usuarios[i].edad;
            archivo >> usuarios[i].cargo;
            i++;
        }
    }
    archivo.close();
    return i;
}

void iniciarSesion(string usuario, string clave, Usuario usuarios[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (usuario == usuarios[i].nombreUsuario && clave == usuarios[i].clave) {
            cout << "Bienvenido";
            return;
        }
    }
    cout << "No se pudo iniciar sesion.";
}

void cambiarClave(string usuario, string nuevaClave, Usuario usuarios[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (usuarios[i].nombreUsuario == usuario) {
            usuarios[i].clave = nuevaClave;
        }
    }
    escribirDatosArchivo(usuarios, tam);
}

int main()
{
    Usuario usuarios[20];
    int tam;
    //cout << "Ingrese cuantos usuarios desea guardar: ";
    //cin >> tam;
    //llenarDatos(usuarios, tam);
    tam = leerDatosArchivo(usuarios);
    imprimirDatos(usuarios, tam);
    //escribirDatosArchivo(usuarios, tam);
    return 0;
}