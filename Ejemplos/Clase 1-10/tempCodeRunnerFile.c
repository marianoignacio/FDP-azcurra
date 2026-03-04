void imprimirMatriz(int matriz[3][3], int filas, int columnas) {
    int i,j;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}