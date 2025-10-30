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
    int NUM_ESTUDIANTES = 3;
    Estudiante grupo[NUM_ESTUDIANTES];

    cout << "--- Registro de estudiantes ---" << endl;

    // Captura de datos
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "\nEstudiante " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> grupo[i].nombre;
        cout << "Edad: ";
        cin >> grupo[i].edad;
        cout << "Promedio: ";
        cin >> grupo[i].promedio;
    }

    // Mostrar los datos ingresados
    cout << "\n--- Lista de estudiantes ---" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "\nEstudiante " << i + 1 << ":" << endl;
        cout << "Nombre: " << grupo[i].nombre << endl;
        cout << "Edad: " << grupo[i].edad << endl;
        cout << "Promedio: " << grupo[i].promedio << endl;
    }

    return 0;
}