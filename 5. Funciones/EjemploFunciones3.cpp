#include <iostream>
using namespace std;

// Función que determina si un producto es caro
bool esCaro(int precio) {
    if (precio > 1000) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int precio;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    bool caro = esCaro(precio);

    if (caro == true) {
        cout << "El producto es caro." << endl;
    } else {
        cout << "El producto no es caro." << endl;
    }

    return 0;
}
