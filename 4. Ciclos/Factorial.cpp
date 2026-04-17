#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero no negativo: ";
    cin >> n;

    long long factorial = 1;
    for (int i = 2; i <= n; i++) {
        factorial *= i;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
