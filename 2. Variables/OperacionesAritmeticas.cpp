#include <iostream>
using namespace std;

// Operaciones aritmeticas basicas leyendo variables con cin.
int main() {
    double num1, num2;

    cout << "=== OPERACIONES ARITMETICAS ===" << endl;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "\n--- Resultados ---" << endl;
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    // Evitamos dividir entre cero
    if (num2 != 0) {
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    } else {
        cout << "No se puede dividir entre cero." << endl;
    }

    return 0;
}
