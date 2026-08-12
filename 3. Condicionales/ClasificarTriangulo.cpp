#include <iostream>
using namespace std;

// Ejemplo complejo: clasificacion de un triangulo segun sus lados y angulos.
// Combina operadores AND (&&) y OR (||) con condicionales anidados.
int main() {
    int a, b, c; // longitudes de los tres lados

    cout << "=== CLASIFICACION DE UN TRIANGULO ===" << endl;
    cout << "Ingresa el lado a: ";
    cin >> a;
    cout << "Ingresa el lado b: ";
    cin >> b;
    cout << "Ingresa el lado c: ";
    cin >> c;

    // Validacion: todos los lados deben ser positivos (AND)
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "\nError: los lados deben ser positivos." << endl;
    } else {
        // Desigualdad triangular: la suma de dos lados debe superar al tercero
        if (a + b > c && a + c > b && b + c > a) {
            cout << "\nEs un triangulo valido." << endl;

            // Clasificacion por lados (condicionales anidados)
            if (a == b && b == c) {
                cout << "Tipo por lados: Equilatero." << endl;
            } else if (a == b || b == c || a == c) {
                cout << "Tipo por lados: Isosceles." << endl;
            } else {
                cout << "Tipo por lados: Escaleno." << endl;
            }

            // Clasificacion por angulos usando el teorema de Pitagoras
            int a2 = a * a;
            int b2 = b * b;
            int c2 = c * c;

            if (a2 + b2 == c2 || a2 + c2 == b2 || b2 + c2 == a2) {
                cout << "Tipo por angulos: Rectangulo." << endl;
            } else if (a2 + b2 > c2 && a2 + c2 > b2 && b2 + c2 > a2) {
                cout << "Tipo por angulos: Acutangulo." << endl;
            } else {
                cout << "Tipo por angulos: Obtusangulo." << endl;
            }
        } else {
            cout << "\nNo se puede formar un triangulo con esos lados." << endl;
        }
    }

    return 0;
}
