#include <iostream>

using namespace std;

int main() {
    float distancia, velocidad, tiempo;

    // Solicitar la distancia
    cout << "Ingresa la distancia en kilometros: ";
    cin >> distancia;

    // Solicitar la velocidad
    cout << "Ingresa la velocidad en km/h: ";
    cin >> velocidad;

    // Calcular el tiempo (en horas)
    tiempo = distancia / velocidad;

    // Mostrar el resultado
    cout << "El tiempo estimado de viaje es: " << tiempo << " horas" << endl;

    return 0;
}
