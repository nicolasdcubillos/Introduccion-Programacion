#include <iostream>
using namespace std;

void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "¿Cuántos elementos tiene el arreglo? ";
    cin >> n;

    // Se declara con un espacio extra para poder insertar
    int numeros[101];
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> numeros[i];
    }

    int posicion, valor;
    cout << "¿En qué posición desea insertar (0 a " << n << ")? ";
    cin >> posicion;
    cout << "¿Qué valor desea insertar? ";
    cin >> valor;

    // Desplazar todos los elementos desde el final hasta la posición elegida
    for (int i = n; i > posicion; i--) {
        numeros[i] = numeros[i - 1];
    }

    numeros[posicion] = valor;
    n++;

    cout << "Arreglo después de insertar: ";
    imprimirArreglo(numeros, n);

    return 0;
}
