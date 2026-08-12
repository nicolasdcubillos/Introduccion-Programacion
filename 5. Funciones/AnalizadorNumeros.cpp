#include <iostream>
using namespace std;

// Ejemplo complejo de funciones: analizador de numeros.
// Las funciones usan ciclos y condicionales internamente y se llaman entre si.

// Devuelve true si el numero es primo (usa un ciclo for)
bool esPrimo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // tiene un divisor, no es primo
        }
    }
    return true;
}

// Calcula el factorial de forma iterativa (usa un ciclo while)
long factorial(int n) {
    long resultado = 1;
    int i = 2;
    while (i <= n) {
        resultado *= i;
        i++;
    }
    return resultado;
}

// Suma los digitos de un numero (usa un ciclo while)
int sumaDigitos(int n) {
    if (n < 0) {
        n = -n; // trabajar con el valor absoluto
    }
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

// Cuenta cuantos numeros primos hay entre 2 y n (llama a esPrimo)
int contarPrimos(int n) {
    int cantidad = 0;
    for (int i = 2; i <= n; i++) {
        if (esPrimo(i)) {
            cantidad++;
        }
    }
    return cantidad;
}

// Muestra un reporte completo de un numero (llama a varias funciones)
void analizarNumero(int n) {
    cout << "\n--- Analisis del numero " << n << " ---" << endl;

    if (esPrimo(n)) {
        cout << n << " es primo." << endl;
    } else {
        cout << n << " no es primo." << endl;
    }

    cout << "Suma de sus digitos: " << sumaDigitos(n) << endl;
    cout << "Cantidad de primos hasta " << n << ": " << contarPrimos(n) << endl;

    if (n >= 0 && n <= 20) {
        cout << "Factorial de " << n << ": " << factorial(n) << endl;
    } else {
        cout << "Factorial no calculado (usa un numero entre 0 y 20)." << endl;
    }
}

int main() {
    int cantidad;

    cout << "=== ANALIZADOR DE NUMEROS ===" << endl;
    cout << "¿Cuantos numeros deseas analizar? ";
    cin >> cantidad;

    // Ciclo for que procesa cada numero ingresado
    for (int i = 1; i <= cantidad; i++) {
        int numero;
        cout << "\nNumero " << i << ": ";
        cin >> numero;
        analizarNumero(numero);
    }

    cout << "\nAnalisis finalizado." << endl;
    return 0;
}
