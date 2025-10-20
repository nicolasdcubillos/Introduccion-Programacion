#include <iostream>
using namespace std;

// Función para llenar la matriz
void llenarMatriz(int filas, int columnas, int matriz[][100]) {
    cout << "Llenar la matriz (" << filas << "x" << columnas << "):\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el valor en [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int filas, int columnas, int matriz[][100]) {
    cout << "\nMatriz ingresada:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int contarPares(int filas, int columnas, int matriz[][100]) {
    int contador = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] % 2 == 0) {
                cout << matriz[i][j] << " ";
                contador++;
            }
        }
    }
    cout << endl;
    return contador;
}

int main() {
    int filas, columnas;
    int matriz[100][100]; // tamano máximo permitido

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    llenarMatriz(filas, columnas, matriz);
    imprimirMatriz(filas, columnas, matriz);

    int cantidadPares = contarPares(filas, columnas, matriz);
    cout << "\nCantidad total de números pares: " << cantidadPares << endl;

    return 0;
}