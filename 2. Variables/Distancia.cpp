#include <iostream>
using namespace std;

// Calcula la distancia recorrida a partir de la velocidad y el tiempo.
int main() {
    float velocidad; // en km/h
    float tiempo;    // en horas

    cout << "Ingresa la velocidad en km/h: ";
    cin >> velocidad;

    cout << "Ingresa el tiempo en horas: ";
    cin >> tiempo;

    float distancia = velocidad * tiempo;

    cout << "La distancia recorrida es: " << distancia << " km" << endl;

    return 0;
}
