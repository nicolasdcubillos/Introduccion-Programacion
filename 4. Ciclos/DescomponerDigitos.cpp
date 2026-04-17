#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    cout << "Dígitos de " << numero << " (de derecha a izquierda):" << endl;

    int copia = numero;
    while (copia > 0) {
        int digito = copia % 10;  // Extraer el último dígito
        cout << "  dígito: " << digito << endl;
        copia = copia / 10;       // Eliminar el último dígito
    }

    return 0;
}
