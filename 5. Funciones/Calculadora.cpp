#include <iostream>
using namespace std;

int suma(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int resta(int a, int b) {
    int resultado = a - b;
    return resultado;
}

int multiplicar(int a, int b) {
    int resultado = a * b;
    return resultado;
}

int dividir(int a, int b) {
    if (b == 0) {
        cout << "Error: No se puede dividir entre 0." << endl;
        return 0;
    }
    int resultado = a / b;
    return resultado;
}

void mostrarMenu() {
    cout << "\n=== CALCULADORA ===" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "0. Salir" << endl;
    cout << "Elija una opcion: ";
}

int pedirOpcion() {
    int opcion;
    cin >> opcion;
    return opcion;
}

int main() {
    int opcion;
    int num1, num2;
    int resultado; // variable para guardar resultados

    cout << "Ingrese el numero 1: ";
    cin >> num1;
    
    cout << "Ingrese el numero 2: ";
    cin >> num2;

    do {
        mostrarMenu();
        opcion = pedirOpcion();

        switch (opcion) {
            case 1:
                resultado = suma(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 2:
                resultado = resta(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 3:
                resultado = multiplicar(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 4:
                resultado = dividir(num1, num2);
                cout << "Resultado: " << resultado << endl;
                break;

            case 0:
                cout << "Saliendo de la calculadora..." << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
        }

    } while (opcion != 0);

    return 0;
}
