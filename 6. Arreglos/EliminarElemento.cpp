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

    int numeros[100];
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> numeros[i];
    }

    int posicion;
    cout << "¿Qué posición desea eliminar (0 a " << n - 1 << ")? ";
    cin >> posicion;

    cout << "Elemento eliminado: " << numeros[posicion] << endl;

    // Desplazar todos los elementos una posición a la izquierda
    for (int i = posicion; i < n - 1; i++) {
        numeros[i] = numeros[i + 1];
    }

    n--;

    cout << "Arreglo después de eliminar: ";
    imprimirArreglo(numeros, n);

    return 0;
}
