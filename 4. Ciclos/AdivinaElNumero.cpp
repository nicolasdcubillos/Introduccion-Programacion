#include <iostream>
using namespace std;

// Ejemplo complejo: juego de adivinar el numero.
// Combina do-while (repetir partidas), while (intentos) y condicionales.
int main() {
    char jugarOtra;
    int partida = 0;

    do {
        partida++;
        // Numero "secreto" generado de forma sencilla a partir de la partida
        int secreto = (partida * 7 + 13) % 100 + 1; // valor entre 1 y 100
        int intento;
        int contador = 0;
        bool acerto = false;

        cout << "\n=== PARTIDA " << partida << " ===" << endl;
        cout << "Adivina el numero entre 1 y 100." << endl;

        // Ciclo while: el jugador tiene 7 intentos como maximo
        while (contador < 7 && !acerto) {
            cout << "Intento " << (contador + 1) << " - tu numero: ";
            cin >> intento;
            contador++;

            if (intento == secreto) {
                acerto = true;
                cout << "¡Correcto! Lo lograste en " << contador << " intentos." << endl;
            } else if (intento < secreto) {
                cout << "El numero secreto es MAYOR." << endl;
            } else {
                cout << "El numero secreto es MENOR." << endl;
            }
        }

        if (!acerto) {
            cout << "Te quedaste sin intentos. El numero era: " << secreto << endl;
        }

        cout << "¿Quieres jugar otra partida? (s/n): ";
        cin >> jugarOtra;

    } while (jugarOtra == 's' || jugarOtra == 'S');

    cout << "\nJugaste " << partida << " partidas. ¡Hasta luego!" << endl;
    return 0;
}
