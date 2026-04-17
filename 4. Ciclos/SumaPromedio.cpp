#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números va a ingresar? ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        int numero;
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    float promedio = (float)suma / n;

    cout << "Suma:     " << suma     << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
