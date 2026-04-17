#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos términos de Fibonacci desea ver? ";
    cin >> n;

    int a = 0, b = 1;

    cout << "Secuencia de Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";

        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;

    return 0;
}
