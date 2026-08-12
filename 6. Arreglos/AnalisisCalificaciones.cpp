#include <iostream>
using namespace std;

// Ejemplo complejo: analisis de calificaciones usando funciones y arreglos.
// Combina funciones que recorren el arreglo con ciclos y condicionales.

void llenarArreglo(float notas[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese la nota " << (i + 1) << ": ";
        cin >> notas[i];
    }
}

float calcularPromedio(float notas[], int tam) {
    float suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += notas[i];
    }
    return suma / tam;
}

float notaMayor(float notas[], int tam) {
    float mayor = notas[0];
    for (int i = 1; i < tam; i++) {
        if (notas[i] > mayor) {
            mayor = notas[i];
        }
    }
    return mayor;
}

float notaMenor(float notas[], int tam) {
    float menor = notas[0];
    for (int i = 1; i < tam; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}

int contarAprobados(float notas[], int tam, float minima) {
    int aprobados = 0;
    for (int i = 0; i < tam; i++) {
        if (notas[i] >= minima) {
            aprobados++;
        }
    }
    return aprobados;
}

// Ordena el arreglo de menor a mayor (metodo burbuja)
void ordenarAscendente(float notas[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - 1 - i; j++) {
            if (notas[j] > notas[j + 1]) {
                float temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
}

void imprimirArreglo(float notas[], int tam) {
    cout << "Notas: ";
    for (int i = 0; i < tam; i++) {
        cout << notas[i] << " ";
    }
    cout << endl;
}

int main() {
    int cantidad;
    cout << "=== ANALISIS DE CALIFICACIONES ===" << endl;
    cout << "¿Cuantas notas va a ingresar? ";
    cin >> cantidad;

    float notas[100]; // tamano maximo permitido para el ejercicio
    llenarArreglo(notas, cantidad);

    cout << "\nPromedio del curso: " << calcularPromedio(notas, cantidad) << endl;
    cout << "Nota mas alta: " << notaMayor(notas, cantidad) << endl;
    cout << "Nota mas baja: " << notaMenor(notas, cantidad) << endl;
    cout << "Aprobados (nota >= 3.0): " << contarAprobados(notas, cantidad, 3.0) << endl;

    ordenarAscendente(notas, cantidad);
    cout << "\nNotas ordenadas de menor a mayor:" << endl;
    imprimirArreglo(notas, cantidad);

    return 0;
}
