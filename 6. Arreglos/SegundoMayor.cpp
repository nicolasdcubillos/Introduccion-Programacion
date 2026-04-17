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

    // Necesitamos al menos 2 elementos distintos
    int mayor        = numeros[0];
    int segundoMayor = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor) {
            segundoMayor = mayor;          // El antiguo mayor baja al segundo lugar
            mayor        = numeros[i];
        } else if (numeros[i] > segundoMayor && numeros[i] != mayor) {
            segundoMayor = numeros[i];
        }
    }

    cout << "El mayor es:         " << mayor        << endl;
    cout << "El segundo mayor es: " << segundoMayor << endl;

    return 0;
}
