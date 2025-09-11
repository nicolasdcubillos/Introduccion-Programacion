#include <iostream>
#include <string>
using namespace std;

// Función que devuelve un entero
int sumar(int a, int b) {
    int resultado = a + b;
    return resultado;
}

// Función que devuelve un flotante
float promedio(float x, float y) {
    float resultado = (x + y) / 2;
    return resultado;
}

// Función que devuelve un string
string saludar(string nombre) {
    string mensaje = "Hola, " + nombre + "!";
    return mensaje;
}

// Función que devuelve un booleano
bool esPar(int numero) {
    return (numero % 2 == 0);
}

// Función que no devuelve nada (void)
void mostrarMenu() {
    cout << "\n=== MENU DE FUNCIONES ===" << endl;
    cout << "1. Sumar dos numeros (int)" << endl;
    cout << "2. Promedio de dos numeros (float)" << endl;
    cout << "3. Saludar a una persona (string)" << endl;
    cout << "4. Verificar si un numero es par (bool)" << endl;
    cout << "0. Salir" << endl;
    cout << "Elija una opcion: ";
}

int main() {
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        if (opcion == 1) {
            int a, b;
            cout << "Ingrese dos numeros: ";
            cin >> a >> b;
            cout << "Resultado: " << sumar(a, b) << endl;

        } else if (opcion == 2) {
            float x, y;
            cout << "Ingrese dos numeros decimales: ";
            cin >> x >> y;
            cout << "Promedio: " << promedio(x, y) << endl;

        } else if (opcion == 3) {
            string nombre;
            cout << "Ingrese un nombre: ";
            cin >> nombre;
            cout << saludar(nombre) << endl;

        } else if (opcion == 4) {
            int numero;
            cout << "Ingrese un numero: ";
            cin >> numero;
            if (esPar(numero)) {
                cout << "El numero es par." << endl;
            } else {
                cout << "El numero es impar." << endl;
            }

        } else if (opcion == 0) {
            cout << "Saliendo..." << endl;
        } else {
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 0);

    return 0;
}
