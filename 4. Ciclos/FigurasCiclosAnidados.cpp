#include <iostream>
using namespace std;

// Ejemplo complejo: menu de figuras dibujadas con ciclos anidados.
// Combina do-while (menu), while (validacion) y for anidados (dibujo).
int main() {
    int opcion;

    do {
        cout << "\n=== FIGURAS CON CICLOS ANIDADOS ===" << endl;
        cout << "1. Cuadrado" << endl;
        cout << "2. Triangulo creciente" << endl;
        cout << "3. Piramide centrada" << endl;
        cout << "0. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1 || opcion == 2 || opcion == 3) {
            int n;
            // Ciclo while para validar que el tamaño sea valido
            cout << "Ingresa el tamaño (1-15): ";
            cin >> n;
            while (n < 1 || n > 15) {
                cout << "Tamaño invalido. Intenta de nuevo (1-15): ";
                cin >> n;
            }

            cout << endl;

            if (opcion == 1) {
                // Cuadrado: for anidado de n x n
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            } else if (opcion == 2) {
                // Triangulo creciente
                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= i; j++) {
                        cout << "* ";
                    }
                    cout << endl;
                }
            } else {
                // Piramide centrada: espacios + asteriscos
                for (int i = 1; i <= n; i++) {
                    for (int esp = 0; esp < n - i; esp++) {
                        cout << " ";
                    }
                    for (int ast = 0; ast < (2 * i - 1); ast++) {
                        cout << "*";
                    }
                    cout << endl;
                }
            }
        } else if (opcion != 0) {
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 0);

    cout << "\nPrograma finalizado." << endl;
    return 0;
}
