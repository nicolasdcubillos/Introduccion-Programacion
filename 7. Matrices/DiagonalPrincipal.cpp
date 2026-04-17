#include <iostream>
using namespace std;

void llenarMatriz(int n, int matriz[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el valor en [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

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
    cout << "Ingrese el tamaño de la matriz cuadrada (n): ";
    cin >> n;

    int matriz[100][100];
    llenarMatriz(n, matriz);

    // La diagonal principal son los elementos donde i == j
    int sumaDiagonal = 0;
    for (int i = 0; i < n; i++) {
        sumaDiagonal += matriz[i][i];
    }

    cout << "\nMatriz:\n";
    imprimirMatriz(n, matriz);
    cout << "\nSuma de la diagonal principal: " << sumaDiagonal << endl;

    return 0;
}
