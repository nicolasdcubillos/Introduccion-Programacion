#include <iostream>

using namespace std;

void numerosAfortunados(int n) {
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int m = 2;
    while (n > m) {
        for (int i = 0; i < n - 1; i += m - 1) {
            for (int j = i; j < n; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
        }
    m++;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    numerosAfortunados(n);
}