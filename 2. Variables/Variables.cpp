#include <iostream>

using namespace std;

int main() {
    // Declaración e inicialización de variables
    int edad = 18;
    float estatura = 1.70f;
    double peso = 65.5;
    char inicial = 'A';
    bool aprobado = true;

    // Mostrar valores en pantalla
    cout << "Edad: " << edad << endl;
    cout << "Estatura: " << estatura << " metros" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Inicial del nombre: " << inicial << endl;
    cout << "¿Aprobado?: " << aprobado << endl; // Muestra 1 (true) o 0 (false)

    // Leer valores desde el usuario
    cout << "\nIngresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tu estatura en metros (usa punto): ";
    cin >> estatura;

    cout << "Ingresa tu peso: ";
    cin >> peso;

    cout << "Ingresa la inicial de tu nombre: ";
    cin >> inicial;

    cout << "¿Aprobaste? (1 para sí, 0 para no): ";
    cin >> aprobado;

    // Mostrar valores ingresados
    cout << "\n--- Datos Ingresados ---" << endl;
    cout << "Edad: " << edad << endl;
    cout << "Estatura: " << estatura << " metros" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "¿Aprobado?: " << aprobado << endl;

    return 0;
}