#include <iostream>
using namespace std;

void llenarMatriz(int filas, int columnas, int matriz[][100], char nombre) {
    cout << "Llenar la matriz " << nombre << ":\n";
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
    int filasA, columnasA, filasB, columnasB;
    int matrizA[100][100], matrizB[100][100], producto[100][100];

    cout << "Dimensiones de la matriz A (filas columnas): ";
    cin >> filasA >> columnasA;

    cout << "Dimensiones de la matriz B (filas columnas): ";
    cin >> filasB >> columnasB;

    // Para multiplicar, las columnas de A deben ser iguales a las filas de B
    if (columnasA != filasB) {
        cout << "Error: las columnas de A (" << columnasA
             << ") deben ser iguales a las filas de B (" << filasB << ")." << endl;
        return 1;
    }

    llenarMatriz(filasA, columnasA, matrizA, 'A');
    llenarMatriz(filasB, columnasB, matrizB, 'B');

    // Multiplicar: cada celda [i][j] es la suma de A[i][k] * B[k][j]
    for (int i = 0; i < filasA; i++) {
        for (int j = 0; j < columnasB; j++) {
            producto[i][j] = 0;
            for (int k = 0; k < columnasA; k++) {
                producto[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    cout << "\nMatriz A:\n";
    imprimirMatriz(filasA, columnasA, matrizA);
    cout << "\nMatriz B:\n";
    imprimirMatriz(filasB, columnasB, matrizB);
    cout << "\nA x B:\n";
    imprimirMatriz(filasA, columnasB, producto);

    return 0;
}
