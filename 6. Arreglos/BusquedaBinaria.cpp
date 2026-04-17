#include <iostream>
using namespace std;

// La búsqueda binaria requiere que el arreglo esté ORDENADO.
// En cada paso descarta la mitad del arreglo comparando con el elemento central.
int busquedaBinaria(int arr[], int n, int objetivo) {
    int izquierda = 0;
    int derecha   = n - 1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;

        if (arr[medio] == objetivo) {
            return medio;              // Encontrado
        } else if (arr[medio] < objetivo) {
            izquierda = medio + 1;    // Buscar en la mitad derecha
        } else {
            derecha = medio - 1;      // Buscar en la mitad izquierda
        }
    }

    return -1;  // No encontrado
}

int main() {
    int n;
    cout << "¿Cuántos elementos tiene el arreglo (debe estar ordenado)? ";
    cin >> n;

    int numeros[100];
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> numeros[i];
    }

    int objetivo;
    cout << "¿Qué número desea buscar? ";
    cin >> objetivo;

    int posicion = busquedaBinaria(numeros, n, objetivo);

    if (posicion != -1) {
        cout << "El número " << objetivo << " se encontró en la posición " << posicion << "." << endl;
    } else {
        cout << "El número " << objetivo << " no se encontró en el arreglo." << endl;
    }

    return 0;
}
