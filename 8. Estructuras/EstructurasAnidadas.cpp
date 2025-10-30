#include <iostream>
#include <string>
using namespace std;

// Estructura para la dirección
struct Direccion {
    string calle;
    string ciudad;
    string pais;
};

// Estructura principal
struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    Direccion domicilio; // estructura anidada
};

int main() {
    Estudiante alumno;

    cout << "--- Registro de estudiante ---" << endl;

    cout << "Nombre: ";
    cin >> alumno.nombre;

    cout << "Edad: ";
    cin >> alumno.edad;

    cout << "Promedio: ";
    cin >> alumno.promedio;

    cout << "\n--- Datos de dirección ---" << endl;
    cout << "Calle: ";
    cin >> alumno.domicilio.calle;
    cout << "Ciudad: ";
    cin >> alumno.domicilio.ciudad;
    cout << "Pais: ";
    cin >> alumno.domicilio.pais;

    cout << "\n--- Datos completos del estudiante ---" << endl;
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Edad: " << alumno.edad << endl;
    cout << "Promedio: " << alumno.promedio << endl;
    cout << "Direccion: " << alumno.domicilio.calle << ", " << alumno.domicilio.ciudad << ", " << alumno.domicilio.pais << endl;

    return 0;
}