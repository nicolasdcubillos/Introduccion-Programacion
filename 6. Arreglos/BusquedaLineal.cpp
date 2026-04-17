#include <iostream>
using namespace std;

// Recorre todo el arreglo buscando el objetivo.
// Retorna el índice si lo encuentra, o -1 si no existe.
int busquedaLineal(int arr[], int n, int objetivo) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == objetivo) {
            return i;
        }
    }
    return -1;
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

    int objetivo;
    cout << "¿Qué número desea buscar? ";
    cin >> objetivo;

    int posicion = busquedaLineal(numeros, n, objetivo);

    if (posicion != -1) {
        cout << "El número " << objetivo << " se encontró en la posición " << posicion << "." << endl;
    } else {
        cout << "El número " << objetivo << " no se encontró en el arreglo." << endl;
    }

    return 0;
}
