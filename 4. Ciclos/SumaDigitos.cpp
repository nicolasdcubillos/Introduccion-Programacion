#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    int suma = 0;
    int copia = numero;

    while (copia > 0) {
        suma += copia % 10;   // Sumar el último dígito
        copia = copia / 10;   // Eliminar el último dígito
    }

    cout << "La suma de los dígitos de " << numero << " es: " << suma << endl;

    return 0;
}
