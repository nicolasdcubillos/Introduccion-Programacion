#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "Ingrese un número positivo: ";
        cin >> num;
    } while (num <= 0);

    cout << "Número válido: " << num << endl;
    return 0;
}