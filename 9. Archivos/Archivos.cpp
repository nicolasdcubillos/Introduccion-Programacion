#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string nombreArchivo = "personas.txt";

    string nombre, apellido;
    int edad;

    ofstream archivoSalida(nombreArchivo);

    if (archivoSalida.is_open()) {
        cout << "Ingrese nombre: ";
        cin >> nombre;
        cout << "Ingrese apellido: ";
        cin >> apellido;
        cout << "Ingrese edad: ";
        cin >> edad;

        archivoSalida << nombre << " " << apellido << " " << edad << endl;
        archivoSalida.close();
        cout << "Datos guardados correctamente.\n";
    } else {
        cout << "No se pudo abrir el archivo para escritura.\n";
        return 1;
    }

    ifstream archivoEntrada(nombreArchivo);

    if (archivoEntrada.is_open()) {
        cout << "\nLeyendo datos desde el archivo:\n";
        archivoEntrada >> nombre >> apellido >> edad;
        archivoEntrada.close();

        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Edad: " << edad << endl;
    } else {
        cout << "No se pudo abrir el archivo para lectura.\n";
        return 1;
    }

    return 0;
}