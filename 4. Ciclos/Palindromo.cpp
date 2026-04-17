#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    // Invertir el número
    int invertido = 0;
    int copia = numero;
    while (copia > 0) {
        invertido = invertido * 10 + (copia % 10);
        copia = copia / 10;
    }

    // Si el número es igual a su inverso, es palíndromo
    if (numero == invertido) {
        cout << numero << " ES un palíndromo." << endl;
    } else {
        cout << numero << " NO es un palíndromo." << endl;
    }

    return 0;
}
