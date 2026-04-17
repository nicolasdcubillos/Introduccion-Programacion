#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números va a ingresar? ";
    cin >> n;

    int mayor;
    cout << "Ingrese el número 1: ";
    cin >> mayor;

    for (int i = 2; i <= n; i++) {
        int numero;
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;

        if (numero > mayor) {
            mayor = numero;
        }
    }

    cout << "El número mayor es: " << mayor << endl;

    return 0;
}
