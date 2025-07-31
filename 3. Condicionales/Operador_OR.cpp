#include <iostream>

using namespace std;

int main() {
    int dia;

    cout << "Ingresa un número de día (1=Lunes, ..., 7=Domingo): ";
    cin >> dia;

    // Verifica si es fin de semana
    if (dia == 6 || dia == 7) {
        cout << "Es fin de semana." << endl;
    } else {
        cout << "Es un día de semana." << endl;
    }

    return 0;
}