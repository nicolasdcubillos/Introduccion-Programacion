#include <iostream>

using namespace std;

void almacenarArreglos(string jugadores[], int partidas[], int n, int m) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del jugador " << i << ":";
        cin >> jugadores[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> partidas[i];
    }
}

void campeonato(string jugadores[], int partidas[], int n, int m) {
    int puntajes[n];
    for (int i = 0; i < n; i++) {
        puntajes[i] = 0;
    }

    for (int i = 0; i < m - 2; i+=2) {
        int pos = partidas[i];
        puntajes[pos] += partidas[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (puntajes[j] > puntajes[j + 1]) {
                int aux = puntajes[j];
                puntajes[j] = puntajes[j + 1];
                puntajes[j + 1] = aux;

                string aux2 = jugadores[j];
                jugadores[j] = jugadores[j + 1];
                jugadores[j + 1] = aux2;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << jugadores[i] << ": " << puntajes[i] << endl;
    }
}

int main () {
    
}