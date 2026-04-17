#include <iostream>
using namespace std;

void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n1;
    cout << "Tamaño del primer arreglo: ";
    cin >> n1;

    int arreglo1[100];
    for (int i = 0; i < n1; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo1[i];
    }

    int n2;
    cout << "Tamaño del segundo arreglo: ";
    cin >> n2;

    int arreglo2[100];
    for (int i = 0; i < n2; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo2[i];
    }

    // Copiar ambos arreglos en uno nuevo
    int fusionado[200];
    int nFusion = n1 + n2;

    for (int i = 0; i < n1; i++) {
        fusionado[i] = arreglo1[i];
    }
    for (int i = 0; i < n2; i++) {
        fusionado[n1 + i] = arreglo2[i];
    }

    cout << "\nArreglo 1:  ";
    imprimirArreglo(arreglo1, n1);
    cout << "Arreglo 2:  ";
    imprimirArreglo(arreglo2, n2);
    cout << "Fusionado:  ";
    imprimirArreglo(fusionado, nFusion);

    return 0;
}
