#include <iostream>
using namespace std;

// Variables de tipo int: numeros enteros (sin decimales).
int main() {
    int edad;
    int anioNacimiento;

    cout << "=== VARIABLES ENTERAS (int) ===" << endl;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tu año de nacimiento: ";
    cin >> anioNacimiento;

    // Con enteros podemos hacer operaciones aritmeticas
    int anioActual = anioNacimiento + edad;

    cout << "\nTu edad es: " << edad << " años" << endl;
    cout << "Naciste en: " << anioNacimiento << endl;
    cout << "Este año cumples aproximadamente en: " << anioActual << endl;

    // La division entre enteros descarta los decimales
    int total = 17;
    int grupos = 5;
    cout << "\n17 dividido en 5 grupos (division entera): " << total / grupos << endl;
    cout << "Sobrante (modulo): " << total % grupos << endl;

    return 0;
}
