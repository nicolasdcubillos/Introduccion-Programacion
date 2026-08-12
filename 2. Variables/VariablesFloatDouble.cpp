#include <iostream>
using namespace std;

// Variables float y double: numeros con decimales.
// double tiene mayor precision que float.
int main() {
    float precio;
    double promedio;

    cout << "=== VARIABLES DECIMALES (float y double) ===" << endl;

    cout << "Ingresa el precio de un producto: ";
    cin >> precio;

    cout << "Ingresa tu promedio (ej: 4.35): ";
    cin >> promedio;

    // Operaciones con decimales conservan la parte fraccionaria
    float iva = precio * 0.19f;
    float precioFinal = precio + iva;

    cout << "\nPrecio sin IVA: " << precio << endl;
    cout << "IVA (19%): " << iva << endl;
    cout << "Precio final: " << precioFinal << endl;

    cout << "\nTu promedio es: " << promedio << endl;

    // Diferencia de precision entre float y double
    float piFloat = 3.141592653589793f;
    double piDouble = 3.141592653589793;
    cout << "\nPi como float:  " << piFloat << endl;
    cout << "Pi como double: " << piDouble << endl;

    return 0;
}
