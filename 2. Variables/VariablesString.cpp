#include <iostream>
#include <string>
using namespace std;

// Variables string: texto (cadenas de caracteres).
int main() {
    string nombre;
    string ciudad;
    string frase;

    cout << "=== VARIABLES DE TEXTO (string) ===" << endl;

    // cin >> lee una sola palabra (se detiene en el espacio)
    cout << "Ingresa tu nombre: ";
    cin >> nombre;

    cout << "Ingresa tu ciudad: ";
    cin >> ciudad;

    // getline lee una linea completa, incluyendo espacios
    cin.ignore(); // limpia el salto de linea pendiente antes de getline
    cout << "Escribe una frase que te guste: ";
    getline(cin, frase);

    cout << "\n--- Resultado ---" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Ciudad: " << ciudad << endl;
    cout << "Frase: " << frase << endl;

    // Los string se pueden unir (concatenar) con +
    string saludo = "Hola, " + nombre + " de " + ciudad + "!";
    cout << "\n" << saludo << endl;

    // .length() devuelve cuantos caracteres tiene el texto
    cout << "Tu nombre tiene " << nombre.length() << " letras." << endl;

    return 0;
}
