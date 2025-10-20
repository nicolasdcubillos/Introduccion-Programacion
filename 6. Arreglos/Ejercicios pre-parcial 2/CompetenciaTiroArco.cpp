#include <iostream>

using namespace std;

int calcularTotalCiudad(int disparos[], int tamDisparos, int ciudad, int puntajes[]) {
    int total = 0;
    for (int i = 0; i < tamDisparos; i += 3) {
        if (disparos[i] == ciudad) {
            total += disparos[i + 2];
        }
    }
    puntajes[ciudad] = total;
    return total;
}

void ordenarResultados(string ciudades[], int puntajes[], int tamCiudades) {
    for (int i = 0; i < tamCiudades; i++) {
        for (int j = 0; j < tamCiudades - 1; j++) {
            if (puntajes[j] < puntajes[j + 1]) {
                int aux = puntajes[j];
                puntajes[j] = puntajes[j + 1];
                puntajes[j + 1] = aux;
                
                string aux2 = ciudades[j];
                ciudades[j] = ciudades[j + 1];
                ciudades[j + 1] = aux2;
            }
        }
    }
}

void mostrarPodio(string ciudades[], int puntajes[], int tamCiudades) {
    for (int i = 0; i < 3; i++) {
        cout << "Puesto " << i + 1 << ": " << "Ciudad " << ciudades[i] << " con " << puntajes[i] << " puntos." << endl;
    }
}

int main()
{
    int tamCiudades = 6, tamDisparos = 9;
    int puntajes[tamCiudades];
    string ciudades[tamCiudades] = {"Bogota", "Medellin", "Cali", "Pereira", "Tunja", "Cartagena"};
    int disparos[tamDisparos] = {0, 1, 9, 1, 1, 9, 2, 1, 10};
    
    for (int i = 0; i < tamCiudades; i++) {
        calcularTotalCiudad(disparos, tamDisparos, i, puntajes);
    }
    
    ordenarResultados(ciudades, puntajes, tamCiudades);
    mostrarPodio(ciudades, puntajes, tamCiudades);

    return 0;
}