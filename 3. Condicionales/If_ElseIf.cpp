#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad < 0) {
        cout << "Edad no valida." << endl;
    } else if (edad < 13) {
        cout << "Eres un niño." << endl;
    } else if (edad < 18) {
        cout << "Eres un adolescente." << endl;
    } else if (edad < 60) {
        cout << "Eres un adulto." << endl;
    } else {
        cout << "Eres un adulto mayor." << endl;
    }

    return 0;
}
