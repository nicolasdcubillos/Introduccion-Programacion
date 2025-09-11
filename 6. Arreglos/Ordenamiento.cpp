#include <iostream>
using namespace std;

int main() {
    int numeros[] = {5, 3, 8, 6, 2, 7, 4, 1};
    int n = 8;

    // Algoritmo de ordenamiento burbuja
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (numeros[j] > numeros[j+1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
