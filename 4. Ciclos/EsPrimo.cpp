#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    bool esPrimo = (numero >= 2);

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            esPrimo = false;
            break;
        }
    }

    if (esPrimo) {
        cout << numero << " ES un número primo." << endl;
    } else {
        cout << numero << " NO es un número primo." << endl;
    }

    return 0;
}
