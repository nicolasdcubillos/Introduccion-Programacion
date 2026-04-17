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

// Una matriz es simétrica si matriz[i][j] == matriz[j][i] para todo i, j
bool esSimetrica(int n, int matriz[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz cuadrada (n): ";
    cin >> n;

    int matriz[100][100];
    llenarMatriz(n, matriz);

    cout << "\nMatriz:\n";
    imprimirMatriz(n, matriz);

    if (esSimetrica(n, matriz)) {
        cout << "\nLa matriz ES simétrica." << endl;
    } else {
        cout << "\nLa matriz NO es simétrica." << endl;
    }

    return 0;
}
