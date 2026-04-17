#include <iostream>
using namespace std;

int main() {
    int cantidad;
    cout << "¿Cuántos dígitos quiere ingresar? ";
    cin >> cantidad;

    int numero = 0;
    for (int i = 0; i < cantidad; i++) {
        int digito;
        cout << "Ingrese el dígito " << (i + 1) << ": ";
        cin >> digito;

        numero = numero * 10 + digito;  // Desplazar e incorporar el nuevo dígito
    }

    cout << "Número formado: " << numero << endl;

    return 0;
}
