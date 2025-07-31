#include <iostream>

using namespace std;

int main() {
    int edad;

    // Solicitar la edad al usuario
    cout << "Ingresa tu edad: ";
    cin >> edad;

    // Condicional simple con if y else
    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}
