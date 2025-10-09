#include <iostream>

using namespace std;

void verificarEscalera(int escaleras[], int c, int m, int n) {
    int contrahuellas[n];
    for (int i = 0; i < n; i++) {
        contrahuellas[i] = escaleras[i + 1] - escaleras[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int diferencia = contrahuellas[i + 1] - contrahuellas[i];
        if (diferencia < 0) {
            diferencia = diferencia * -1;
        }
        if (diferencia > c) {
            cout << "Tropiezo";
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                int diferencia = contrahuellas[i] - contrahuellas[j];
                if (diferencia < 0) {
                    diferencia = diferencia * -1;
                }
                if (diferencia > m) {
                    cout << "Tropiezo";
                    return;
                }
            }
        }
    }

    cout << "Ok";
}

int main() {

    // Ejemplo 1

    int c = 1;
    int m = 5;
    int n = 4;
    int escalera[n + 1];
    escalera[0] = 100;     
    escalera[1] = 120;     
    escalera[2] = 141;     
    escalera[3] = 161;     
    escalera[4] = 180;      
    verificarEscalera(escalera, c, m, n);
    cout << endl;

    // Ejemplo 2

    c = 1;
    m = 3;
    n = 5;
    int escalera2[n + 1];
    escalera2[0] = 0;     
    escalera2[1] = 1;     
    escalera2[2] = 3;     
    escalera2[3] = 6;     
    escalera2[4] = 10;      
    escalera2[5] = 15;      
    verificarEscalera(escalera2, c, m, n);
}