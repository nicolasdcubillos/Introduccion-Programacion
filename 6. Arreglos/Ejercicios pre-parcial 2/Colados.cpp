#include <iostream>

using namespace std;

int colados(int arr[], int n) {
    int contador = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            contador++;
        }
    }

    cout << contador << endl;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            cout << arr[i] << " ";
        }
    }
    return contador;
}

int main () {
    int arr[7] = {1, 4, 3, 2, 5, 7, 6};
    int n = 7;
    colados(arr, n);
    
}