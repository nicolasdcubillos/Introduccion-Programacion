#include <iostream>
using namespace std;

void imprimirMatriz(int n, int matriz[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz identidad (n): ";
    cin >> n;

    int identidad[100][100];

    // La matriz identidad tiene 1 en la diagonal principal y 0 en el resto
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                identidad[i][j] = 1;
            } else {
                identidad[i][j] = 0;
            }
        }
    }

    cout << "\nMatriz identidad de " << n << "x" << n << ":\n";
    imprimirMatriz(n, identidad);

    return 0;
}
