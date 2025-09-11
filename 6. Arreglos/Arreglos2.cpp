#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    float notas[100]; 
    float suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    cout << "Promedio = " << suma / n << endl;
    return 0;
}