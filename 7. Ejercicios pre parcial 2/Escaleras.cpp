void verificarEscalera(int escalera[], int c, int m, int n) {
    int contrahuellas[n];
    for (int i = 0; i < n; i++) {
        contrahuellas[i] = escaleras[i + 1] - escaleras[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int diferencia = contrahuellas[i + 1] - contrahuellas[i];
        if (diferencia < 0) {
            diferencia = diferencia * -1;
        }
        if (diferencia > c) {
            cout << "Tropiezo";
            return;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                int diferencia = contrahuellas[i] - contrahuellas[j];
                if (diferencia < 0) {
                    diferencia = diferencia * -1;
                }
                if (diferencia > m) {
                    cout << "Tropiezo";
                    return;
                }
            }
        }
    }
}