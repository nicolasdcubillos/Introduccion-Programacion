#include <iostream>

using namespace std;

int main() {
    int opcion;

    cout << "Menú de opciones:" << endl;
    cout << "1. Ver saldo" << endl;
    cout << "2. Retirar dinero" << endl;
    cout << "3. Depositar dinero" << endl;
    cout << "4. Salir" << endl;

    cout << "Elige una opción (1-4): ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Has elegido ver el saldo." << endl;
            break;
        case 2:
            cout << "Has elegido retirar dinero." << endl;
            break;
        case 3:
            cout << "Has elegido depositar dinero." << endl;
            break;
        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no válida. Intenta de nuevo." << endl;
            break;
    }

    return 0;
}
