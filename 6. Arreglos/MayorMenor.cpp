#include <iostream>
using namespace std;

int main() {
    int numeros[7] = {15, 7, 22, 3, 9, 40, 11};
    int n = 7;

    int mayor = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;

    return 0;
}
