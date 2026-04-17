#include <iostream>
using namespace std;

void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void invertirArreglo(int arr[], int n) {
    int inicio = 0;
    int fin    = n - 1;

    while (inicio < fin) {
        // Intercambiar los extremos y avanzar hacia el centro
        int temp      = arr[inicio];
        arr[inicio]   = arr[fin];
        arr[fin]      = temp;
        inicio++;
        fin--;
    }
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

    cout << "Arreglo original:  ";
    imprimirArreglo(numeros, n);

    invertirArreglo(numeros, n);

    cout << "Arreglo invertido: ";
    imprimirArreglo(numeros, n);

    return 0;
}
