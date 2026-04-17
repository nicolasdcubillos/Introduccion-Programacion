#include <iostream>
using namespace std;

int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente (no negativo): ";
    cin >> exponente;

    long long resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    cout << base << "^" << exponente << " = " << resultado << endl;

    return 0;
}
