#include <iostream>
using namespace std;

void llenarMatriz(int filas, int columnas, int matriz[][100]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el valor en [" << i << "][" << j << "]: ";
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
    int matriz[100][100];
    int transpuesta[100][100];

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    llenarMatriz(filas, columnas, matriz);

    // Transponer: el elemento [i][j] de la original pasa a ser [j][i]
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\nMatriz original (" << filas << "x" << columnas << "):\n";
    imprimirMatriz(filas, columnas, matriz);

    cout << "\nMatriz transpuesta (" << columnas << "x" << filas << "):\n";
    imprimirMatriz(columnas, filas, transpuesta);

    return 0;
}
