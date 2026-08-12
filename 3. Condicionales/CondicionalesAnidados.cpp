#include <iostream>
using namespace std;

// Ejemplo complejo: sistema de aprobacion de credito bancario.
// Combina condicionales anidados con los operadores AND (&&) y OR (||).
int main() {
    int edad;
    double ingresos;      // ingresos mensuales
    int puntaje;          // puntaje crediticio (0 a 1000)
    bool tieneDeudas;
    char respuesta;

    cout << "=== SOLICITUD DE CREDITO ===" << endl;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tus ingresos mensuales: ";
    cin >> ingresos;

    cout << "Ingresa tu puntaje crediticio (0-1000): ";
    cin >> puntaje;

    cout << "¿Tienes deudas actuales? (s/n): ";
    cin >> respuesta;
    tieneDeudas = (respuesta == 's' || respuesta == 'S');

    // Primer filtro: la persona debe ser mayor de edad
    if (edad < 18) {
        cout << "\nSolicitud rechazada: debes ser mayor de edad." << endl;
    } else {
        // Condicional anidado dentro del else anterior
        if (ingresos >= 1000000 && puntaje >= 700) {
            // Aunque cumpla ingresos y puntaje, revisamos deudas
            if (tieneDeudas && ingresos < 3000000) {
                cout << "\nCredito aprobado con monto reducido (tienes deudas)." << endl;
            } else {
                cout << "\nCredito aprobado con monto completo." << endl;
            }
        } else if ((ingresos >= 1000000 && puntaje >= 500) || puntaje >= 800) {
            cout << "\nCredito aprobado con revision manual." << endl;
        } else {
            cout << "\nSolicitud rechazada: no cumples los requisitos minimos." << endl;
        }
    }

    return 0;
}
