#include <iostream>
#include <string>
using namespace std;

struct Direccion {
    string ciudad;
    string pais;
};

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
    Direccion domicilio;
};

void registrarEstudiantes(Estudiante grupo[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << "\nEstudiante " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> grupo[i].nombre;
        cout << "Edad: ";
        cin >> grupo[i].edad;
        cout << "Promedio: ";
        cin >> grupo[i].promedio;
        cout << "Ciudad: ";
        cin >> grupo[i].domicilio.ciudad;
        cout << "Pais: ";
        cin >> grupo[i].domicilio.pais;
    }
}

float calcularPromedioGeneral(Estudiante grupo[], int cantidad) {
    float suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += grupo[i].promedio;
    }
    return suma / cantidad;
}

void buscarPorCiudad(Estudiante grupo[], int cantidad, string ciudadBuscada) {
    bool encontrado = false;
    cout << "\nEstudiantes de " << ciudadBuscada << ":\n";
    for (int i = 0; i < cantidad; i++) {
        if (grupo[i].domicilio.ciudad == ciudadBuscada) {
            cout << "Nombre: " << grupo[i].nombre << " | Promedio: " << grupo[i].promedio << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron estudiantes de esa ciudad.\n";
    }
}

int obtenerIndiceMejorPromedio(Estudiante grupo[], int cantidad) {
    int indiceMejor = 0;
    for (int i = 0; i < cantidad; i++) {
        if (grupo[i].promedio > grupo[indiceMejor].promedio) {
            indiceMejor = i;
        }
    }
    return indiceMejor;
}

int main() {
    int NUM_ESTUDIANTES = 3;
    Estudiante grupo[NUM_ESTUDIANTES];

    registrarEstudiantes(grupo, NUM_ESTUDIANTES);

    float promedioGeneral = calcularPromedioGeneral(grupo, NUM_ESTUDIANTES);
    cout << "\nPromedio general del grupo: " << promedioGeneral << endl;

    string ciudadBuscada;
    cout << "\nIngrese una ciudad para buscar estudiantes: ";
    cin >> ciudadBuscada;
    buscarPorCiudad(grupo, NUM_ESTUDIANTES, ciudadBuscada);

    int indiceMejor = obtenerIndiceMejorPromedio(grupo, NUM_ESTUDIANTES);
    cout << "\nEstudiante con mejor promedio: "  << grupo[indiceMejor].nombre << " (" << grupo[indiceMejor].promedio << ")" << endl;

    return 0;
}