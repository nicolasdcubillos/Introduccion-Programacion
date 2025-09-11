#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    cout << "Elementos del arreglo:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }

    return 0;
}