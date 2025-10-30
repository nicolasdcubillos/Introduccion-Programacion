#include <iostream>
#include <string>
using namespace std;

// Definición de la estructura
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    // Declaración de una variable de tipo Estudiante
    Estudiante alumno1;

    // Solicitar datos al usuario
    cout << "Ingrese el nombre del estudiante: ";
    cin >> alumno1.nombre;

    cout << "Ingrese la edad: ";
    cin >> alumno1.edad;

    cout << "Ingrese el promedio: ";
    cin >> alumno1.promedio;

    // Mostrar los datos
    cout << "\n--- Datos del Estudiante ---" << endl;
    cout << "Nombre: " << alumno1.nombre << endl;
    cout << "Edad: " << alumno1.edad << endl;
    cout << "Promedio: " << alumno1.promedio << endl;

    return 0;
}
