#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números va a ingresar? ";
    cin >> n;

    int menor;
    cout << "Ingrese el número 1: ";
    cin >> menor;

    for (int i = 2; i <= n; i++) {
        int numero;
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;

        if (numero < menor) {
            menor = numero;
        }
    }

    cout << "El número menor es: " << menor << endl;

    return 0;
}
