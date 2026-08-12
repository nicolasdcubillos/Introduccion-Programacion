#include <iostream>
#include <string>
using namespace std;

// Ejemplo que combina los cinco tipos: string, int, double, float y bool.
int main() {
    string nombre;
    int edad;
    double estatura;   // en metros
    float salario;
    bool trabaja;

    cout << "=== REGISTRO DE PERSONA ===" << endl;

    cout << "Nombre: ";
    cin >> nombre;

    cout << "Edad: ";
    cin >> edad;

    cout << "Estatura en metros (ej: 1.75): ";
    cin >> estatura;

    cout << "Salario mensual: ";
    cin >> salario;

    cout << "¿Trabaja actualmente? (1 = si, 0 = no): ";
    cin >> trabaja;

    cout << "\n--- Datos registrados ---" << endl;
    cout << "Nombre: " << nombre << " (string)" << endl;
    cout << "Edad: " << edad << " años (int)" << endl;
    cout << "Estatura: " << estatura << " m (double)" << endl;
    cout << "Salario: $" << salario << " (float)" << endl;
    cout << boolalpha;
    cout << "Trabaja: " << trabaja << " (bool)" << endl;

    return 0;
}
