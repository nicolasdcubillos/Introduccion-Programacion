#include <iostream>

using namespace std;

int eliminarRepetido(int fusion[], int tamFusion, int pos) {
    for (int i = pos; i < tamFusion; i++) {
        fusion[i] = fusion[i + 1];
    }
    
    return tamFusion - 1;
}

int fusionarPropiedades(int propiedadesVecino[], int propiedadesEmpresa[], int tamVecino, int tamEmpresa, int fusion[], int tamFusion) {
    // Poniendo primero los datos de propiedadesVecino en el arreglo
    for (int i = 0; i < tamVecino; i++) {
        fusion[i] = propiedadesVecino[i];
    }
    
    // Luego juntando los datos de propiedadesEmpresa en el arreglo
    // Se pone i + tamVecino porque tamVecino es el tamaño en el que quedó el arreglo luego de juntar los datos anteriores
    for (int i = 0; i < tamEmpresa; i++) {
        fusion[i + tamVecino] = propiedadesEmpresa[i];
    }
    
    // Se eliminan los repetidos
    for (int i = 0; i < tamFusion; i++) {
        for (int j = i + 1; j < tamFusion; j++) {
            if (fusion[i] == fusion[j]) {
                tamFusion = eliminarRepetido(fusion, tamFusion, j);
            }
        }
    }
    
    // Se ordena ascendentemente
    for (int i = 0; i < tamFusion; i++) {
        for (int j = 0; j < tamFusion - 1; j++) {
            if (fusion[j] > fusion[j + 1]) {
                int aux = fusion[j];
                fusion[j] = fusion[j + 1];
                fusion[j + 1] = aux;
            }
        }
    }
    
    return tamFusion;
}

void imprimirFusion(int fusion[], int tamFusion) {
    for (int i = 0; i < tamFusion; i++) {
        cout << fusion[i] << " ";
    }
}

int main()
{
    int tamVecino = 6, tamEmpresa = 4;
    int tamFusion = tamVecino + tamEmpresa;
    int propiedadesVecino[tamVecino] = {180000, 200000, 145000, 123000, 125000, 208000};
    int propiedadesEmpresa[tamEmpresa] = {125000, 148000, 210000, 120000};
    int fusion[tamFusion];
    tamFusion = fusionarPropiedades(propiedadesVecino, propiedadesEmpresa, tamVecino, tamEmpresa, fusion, tamFusion);
    imprimirFusion(fusion, tamFusion);

    return 0;
}