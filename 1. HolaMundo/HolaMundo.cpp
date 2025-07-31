#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    if (x > 5) {
        cout << "x es mayor que 5";
    } else if (x < 5) {
        cout << "x es menor que 5";
    } else {
        cout << "x es igual a 5";
    }
}