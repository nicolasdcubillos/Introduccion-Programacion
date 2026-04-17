#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    // Invertir el número usando el mismo truco de descomponer dígitos
    int invertido = 0;
    int copia = numero;

    while (copia > 0) {
        int digito = copia % 10;
        invertido = invertido * 10 + digito;  // Armar el número al revés
        copia = copia / 10;
    }

    cout << "Número original:  " << numero   << endl;
    cout << "Número invertido: " << invertido << endl;

    return 0;
}
