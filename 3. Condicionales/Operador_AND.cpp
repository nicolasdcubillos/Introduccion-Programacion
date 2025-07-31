#include <iostream>

using namespace std;

int main() {
    int edad;
    char genero;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tu genero (M para masculino, F para femenino): ";
    cin >> genero;

    // Verifica si la persona es mujer y mayor de edad
    if (edad >= 18 && genero == 'F') {
        cout << "Eres una mujer mayor de edad." << endl;
    } else {
        cout << "No cumples ambas condiciones." << endl;
    }

    return 0;
}