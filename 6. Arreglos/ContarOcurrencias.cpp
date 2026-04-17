#include <iostream>
using namespace std;

int contarOcurrencias(int arr[], int n, int objetivo) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == objetivo) {
            contador++;
        }
    }
    return contador;
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
    cout << "¿Qué número desea contar? ";
    cin >> objetivo;

    int cantidad = contarOcurrencias(numeros, n, objetivo);
    cout << "El número " << objetivo << " aparece " << cantidad << " vez/veces en el arreglo." << endl;

    return 0;
}
