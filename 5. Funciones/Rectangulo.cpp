#include <iostream>
using namespace std;

// Función que calcula el área
int calcularArea(int base, int altura) {
    int resultado = base * altura;
    return resultado;
}

// Función que calcula el perímetro
int calcularPerimetro(int base, int altura) {
    int resultado = 2 * (base + altura);
    return resultado;
}

// Función que llama a las anteriores y muestra resultados
void mostrarResultados(int base, int altura) {
    int area = calcularArea(base, altura);
    int perimetro = calcularPerimetro(base, altura);

    cout << "\n=== Resultados ===" << endl;
    cout << "Area: " << area << endl;
    cout << "Perimetro: " << perimetro << endl;
}

// Función que pide los datos y llama a mostrarResultados
void procesarRectangulo() {
    int base, altura;
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    mostrarResultados(base, altura);
}

int main() {
    procesarRectangulo();
    return 0;
}