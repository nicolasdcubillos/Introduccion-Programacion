#include <iostream>
using namespace std;

void llenarMatriz(int filas, int columnas, int matriz[][100], int numero) {
    cout << "Llenar la matriz " << numero << ":\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int filas, int columnas, int matriz[][100]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;
    int matrizA[100][100], matrizB[100][100], suma[100][100];

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    llenarMatriz(filas, columnas, matrizA, 1);
    llenarMatriz(filas, columnas, matrizB, 2);

    // Sumar elemento a elemento
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    cout << "\nMatriz A:\n";
    imprimirMatriz(filas, columnas, matrizA);
    cout << "\nMatriz B:\n";
    imprimirMatriz(filas, columnas, matrizB);
    cout << "\nA + B:\n";
    imprimirMatriz(filas, columnas, suma);

    return 0;
}
