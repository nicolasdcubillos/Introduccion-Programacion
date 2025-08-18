#include <iostream>
using namespace std;

int main() {
    // Ciclo para recorrer las tablas del 1 al 10
    for (int i = 1; i <= 10; i++) {
        cout << "Tabla del " << i << ":" << endl;

        // Ciclo interno para imprimir la tabla del número i
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << (i * j) << endl;
        }

        cout << "---------------------" << endl; // Separador
    }

    return 0;
}