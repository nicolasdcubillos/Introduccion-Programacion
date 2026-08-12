#include <iostream>
using namespace std;

// Ejemplo complejo: analisis de una matriz usando funciones.
// Combina ciclos anidados y condicionales dentro de cada funcion.

void llenarMatriz(int filas, int columnas, int m[][100]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Valor [" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void imprimirMatriz(int filas, int columnas, int m[][100]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

int sumaTotal(int filas, int columnas, int m[][100]) {
    int suma = 0;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += m[i][j];
        }
    }
    return suma;
}

// Muestra la suma de cada fila
void sumaPorFila(int filas, int columnas, int m[][100]) {
    for (int i = 0; i < filas; i++) {
        int suma = 0;
        for (int j = 0; j < columnas; j++) {
            suma += m[i][j];
        }
        cout << "Suma fila " << i << ": " << suma << endl;
    }
}

int valorMayor(int filas, int columnas, int m[][100]) {
    int mayor = m[0][0];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] > mayor) {
                mayor = m[i][j];
            }
        }
    }
    return mayor;
}

// Verifica si la matriz es cuadrada y simetrica
bool esSimetrica(int filas, int columnas, int m[][100]) {
    if (filas != columnas) {
        return false;
    }
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (m[i][j] != m[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int filas, columnas;
    int matriz[100][100]; // tamano maximo permitido para el ejercicio

    cout << "=== ANALISIS DE MATRIZ ===" << endl;
    cout << "Numero de filas: ";
    cin >> filas;
    cout << "Numero de columnas: ";
    cin >> columnas;

    llenarMatriz(filas, columnas, matriz);

    cout << "\nMatriz ingresada:" << endl;
    imprimirMatriz(filas, columnas, matriz);

    cout << "\nSuma total de elementos: " << sumaTotal(filas, columnas, matriz) << endl;
    cout << "Valor mayor: " << valorMayor(filas, columnas, matriz) << endl;

    cout << "\nSumas por fila:" << endl;
    sumaPorFila(filas, columnas, matriz);

    if (esSimetrica(filas, columnas, matriz)) {
        cout << "\nLa matriz ES simetrica." << endl;
    } else {
        cout << "\nLa matriz NO es simetrica." << endl;
    }

    return 0;
}
