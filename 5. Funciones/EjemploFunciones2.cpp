#include <iostream>
#include <string>
using namespace std;

// Función que devuelve el cuadrado de un número
int cuadrado(int n) {
    int resultado = n * n;
    return resultado;
}

// Función que devuelve el cubo de un número usando cuadrado()
int cubo(int n) {
    int resultado = cuadrado(n) * n; // reutiliza la función cuadrado
    return resultado;
}

// Función que determina si un número es primo
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Función que devuelve un mensaje
string resultadoPrimo(bool es) {
    if (es) return "El numero es primo.";
    else return "El numero no es primo.";
}

// Función que encadena todas las anteriores
void mostrarResultados(int n) {
    cout << "\n=== RESULTADOS ===" << endl;
    cout << "Numero: " << n << endl;
    cout << "Cuadrado: " << cuadrado(n) << endl;
    cout << "Cubo: " << cubo(n) << endl;

    bool primo = esPrimo(n);
    cout << resultadoPrimo(primo) << endl;
}

int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    mostrarResultados(numero);

    return 0;
}
