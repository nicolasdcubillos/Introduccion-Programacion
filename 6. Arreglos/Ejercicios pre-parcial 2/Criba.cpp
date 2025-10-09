#include <iostream>

using namespace std;

void criba(int numeros[], int n, int primos[]) {
    int tamPrimos = 0;
    for (int i = 2; i < n; i++) {
        for (int j = i + i; j < n; j += i) {
            numeros[j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl;

    for (int i = 2; i < n; i++) {
        if (numeros[i] == 1) {
            primos[tamPrimos] = i;
            tamPrimos++;
        }
    }

    for (int i = 0; i < tamPrimos; i++) {
        cout << primos[i] << " ";
    }
}

int main() {
    int n = 15;
    int numeros[n];
    int primos[n];
    for (int i = 0; i < n; i++) {
        numeros[i] = 1;
    }
    criba(numeros, n, primos);
}