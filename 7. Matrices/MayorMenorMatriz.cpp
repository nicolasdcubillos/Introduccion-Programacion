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

    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    llenarMatriz(filas, columnas, matriz);

    int mayor = matriz[0][0];
    int menor = matriz[0][0];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    cout << "\nMatriz:\n";
    imprimirMatriz(filas, columnas, matriz);
    cout << "\nEl mayor elemento es: " << mayor << endl;
    cout << "El menor elemento es: " << menor << endl;

    return 0;
}
