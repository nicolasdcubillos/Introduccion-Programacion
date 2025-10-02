#include <iostream>
using namespace std;

// Función para llenar un arreglo 
void llenarArreglo(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Función para imprimir un arreglo
void imprimirArreglo(int arr[], int tam) {
    cout << "Elementos del arreglo: ";
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numeros[5];
    int tam = 5;
    
    llenarArreglo(numeros, tam);
    imprimirArreglo(numeros, tam);

    return 0;
}
