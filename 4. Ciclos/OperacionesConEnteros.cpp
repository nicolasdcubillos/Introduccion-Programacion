#include <iostream>
using namespace std;

// Operaciones con numeros enteros trabajando digito a digito.
// Cada operacion esta en su propia funcion y usa ciclos (while / for).

// Cuenta cuantos digitos tiene el numero
int contarDigitos(int n) {
    if (n == 0) {
        return 1; // el cero tiene un digito
    }
    if (n < 0) {
        n = -n;
    }
    int cantidad = 0;
    while (n > 0) {
        cantidad++;
        n /= 10;
    }
    return cantidad;
}

// Muestra los digitos uno por uno (de derecha a izquierda)
void descomponerDigitos(int n) {
    if (n < 0) {
        n = -n;
    }
    cout << "Digitos (de derecha a izquierda): ";
    if (n == 0) {
        cout << "0";
    }
    while (n > 0) {
        int digito = n % 10; // extraer el ultimo digito
        cout << digito << " ";
        n /= 10;             // eliminar el ultimo digito
    }
    cout << endl;
}

// Suma todos los digitos del numero
int sumarDigitos(int n) {
    if (n < 0) {
        n = -n;
    }
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

// Devuelve el numero con sus digitos invertidos
int invertirNumero(int n) {
    bool negativo = (n < 0);
    if (negativo) {
        n = -n;
    }
    int invertido = 0;
    while (n > 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito; // armar el numero al reves
        n /= 10;
    }
    return negativo ? -invertido : invertido;
}

// Arma un numero pidiendo sus digitos uno a uno
int armarNumero() {
    int cantidad;
    cout << "¿Cuantos digitos quiere ingresar? ";
    cin >> cantidad;

    int numero = 0;
    for (int i = 0; i < cantidad; i++) {
        int digito;
        cout << "Ingrese el digito " << (i + 1) << ": ";
        cin >> digito;
        numero = numero * 10 + digito; // desplazar e incorporar el nuevo digito
    }
    return numero;
}

// Devuelve el digito mayor del numero
int digitoMayor(int n) {
    if (n < 0) {
        n = -n;
    }
    int mayor = 0;
    while (n > 0) {
        int digito = n % 10;
        if (digito > mayor) {
            mayor = digito;
        }
        n /= 10;
    }
    return mayor;
}

// Devuelve true si el numero es capicua (se lee igual al derecho y al reves)
bool esCapicua(int n) {
    if (n < 0) {
        n = -n;
    }
    return n == invertirNumero(n);
}

int main() {
    int opcion;

    do {
        cout << "\n=== OPERACIONES CON ENTEROS (DIGITO A DIGITO) ===" << endl;
        cout << "1. Contar digitos" << endl;
        cout << "2. Descomponer en digitos" << endl;
        cout << "3. Sumar los digitos" << endl;
        cout << "4. Invertir el numero" << endl;
        cout << "5. Armar numero desde sus digitos" << endl;
        cout << "6. Digito mayor" << endl;
        cout << "7. ¿Es capicua?" << endl;
        cout << "0. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        if ((opcion >= 1 && opcion <= 4) || opcion == 6 || opcion == 7) {
            int numero;
            cout << "Ingrese un numero entero: ";
            cin >> numero;

            switch (opcion) {
                case 1:
                    cout << "Tiene " << contarDigitos(numero) << " digitos." << endl;
                    break;
                case 2:
                    descomponerDigitos(numero);
                    break;
                case 3:
                    cout << "Suma de digitos: " << sumarDigitos(numero) << endl;
                    break;
                case 4:
                    cout << "Numero invertido: " << invertirNumero(numero) << endl;
                    break;
                case 6:
                    cout << "Digito mayor: " << digitoMayor(numero) << endl;
                    break;
                case 7:
                    if (esCapicua(numero)) {
                        cout << numero << " SI es capicua." << endl;
                    } else {
                        cout << numero << " NO es capicua." << endl;
                    }
                    break;
            }
        } else if (opcion == 5) {
            int numero = armarNumero();
            cout << "Numero formado: " << numero << endl;
        } else if (opcion != 0) {
            cout << "Opcion invalida." << endl;
        }

    } while (opcion != 0);

    cout << "\nPrograma finalizado." << endl;
    return 0;
}
