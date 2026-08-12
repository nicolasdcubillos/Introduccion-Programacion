#include <iostream>
#include <string>
using namespace std;

// Ejemplos de entrada y salida con cin y cout.
int main() {
    cout << "=== ENTRADA Y SALIDA (cin / cout) ===" << endl;

    // cout puede encadenar varios valores con <<
    cout << "Hola" << " " << "mundo" << ", tienes " << 2026 << " opciones." << endl;

    // Diferencia entre endl y \n (ambos hacen salto de linea)
    cout << "Linea 1" << endl;
    cout << "Linea 2\n";

    // cin puede leer varios valores seguidos separados por espacio o enter
    int a, b, c;
    cout << "\nIngresa tres numeros enteros separados por espacio: ";
    cin >> a >> b >> c;
    cout << "Leiste: " << a << ", " << b << " y " << c << endl;
    cout << "La suma es: " << (a + b + c) << endl;

    // Leer distintos tipos en la misma linea
    string producto;
    float precio;
    int cantidad;
    cout << "\nIngresa producto, precio y cantidad (ej: lapiz 500 3): ";
    cin >> producto >> precio >> cantidad;

    cout << "\n--- Factura ---" << endl;
    cout << "Producto: " << producto << endl;
    cout << "Precio unitario: " << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
    cout << "Total a pagar: " << (precio * cantidad) << endl;

    return 0;
}
