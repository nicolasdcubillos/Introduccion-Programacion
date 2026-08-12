#include <iostream>
using namespace std;

// Variables bool: solo pueden valer true (1) o false (0).
int main() {
    bool esEstudiante;
    bool tieneBeca;

    cout << "=== VARIABLES BOOLEANAS (bool) ===" << endl;

    // Al leer un bool con cin: 1 es true, 0 es false
    cout << "¿Eres estudiante? (1 = si, 0 = no): ";
    cin >> esEstudiante;

    cout << "¿Tienes beca? (1 = si, 0 = no): ";
    cin >> tieneBeca;

    // Por defecto cout muestra 1 o 0; boolalpha lo muestra como true/false
    cout << boolalpha;
    cout << "\nEres estudiante: " << esEstudiante << endl;
    cout << "Tienes beca: " << tieneBeca << endl;

    // Los bool son el resultado de comparaciones
    int edad;
    cout << "\nIngresa tu edad: ";
    cin >> edad;

    bool esMayorDeEdad = (edad >= 18);
    cout << "¿Es mayor de edad? " << esMayorDeEdad << endl;

    // Se pueden combinar con && (y), || (o), ! (no)
    bool becaValida = esEstudiante && tieneBeca;
    cout << "¿Beca valida (estudiante y con beca)? " << becaValida << endl;

    return 0;
}
