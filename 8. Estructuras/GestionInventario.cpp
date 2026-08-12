#include <iostream>
#include <string>
using namespace std;

// Ejemplo complejo: gestion de inventario con un arreglo de estructuras y funciones.
// Combina estructuras, arreglos, funciones, ciclos y condicionales.

struct Producto {
    string nombre;
    int cantidad;
    float precio;
};

void registrarProductos(Producto productos[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "\n--- Producto " << (i + 1) << " ---" << endl;
        cout << "Nombre: ";
        cin >> productos[i].nombre;
        cout << "Cantidad: ";
        cin >> productos[i].cantidad;
        cout << "Precio unitario: ";
        cin >> productos[i].precio;
    }
}

// Valor total del inventario (cantidad * precio de cada producto)
float valorInventario(Producto productos[], int tam) {
    float total = 0;
    for (int i = 0; i < tam; i++) {
        total += productos[i].cantidad * productos[i].precio;
    }
    return total;
}

// Devuelve el indice del producto con mayor stock
int indiceMayorStock(Producto productos[], int tam) {
    int indice = 0;
    for (int i = 1; i < tam; i++) {
        if (productos[i].cantidad > productos[indice].cantidad) {
            indice = i;
        }
    }
    return indice;
}

// Lista los productos con stock por debajo de un limite
void mostrarStockBajo(Producto productos[], int tam, int limite) {
    cout << "\nProductos con stock bajo (menos de " << limite << "):" << endl;
    bool hay = false;
    for (int i = 0; i < tam; i++) {
        if (productos[i].cantidad < limite) {
            cout << " - " << productos[i].nombre << " (" << productos[i].cantidad << ")" << endl;
            hay = true;
        }
    }
    if (!hay) {
        cout << " (ninguno)" << endl;
    }
}

int main() {
    int cantidad;
    cout << "=== GESTION DE INVENTARIO ===" << endl;
    cout << "¿Cuantos productos va a registrar? ";
    cin >> cantidad;

    Producto productos[100]; // tamano maximo permitido para el ejercicio
    registrarProductos(productos, cantidad);

    cout << "\nValor total del inventario: $" << valorInventario(productos, cantidad) << endl;

    int idx = indiceMayorStock(productos, cantidad);
    cout << "Producto con mayor stock: " << productos[idx].nombre
         << " (" << productos[idx].cantidad << " unidades)" << endl;

    mostrarStockBajo(productos, cantidad, 10);

    return 0;
}
