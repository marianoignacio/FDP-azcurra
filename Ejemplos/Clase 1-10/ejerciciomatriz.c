//en lugar de hardcodear lo valor, perimitir que el usuario ingrese los valores 

#include <stdio.h>

// Declaración de la función que recibe una matriz como parámetro

void imprimirMatriz(int matriz[3][3], int filas, int columnas) {
    int i,j;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void cambiarvalores(int matriz[3][3], int filas, int columnas) {
    int i,j, datos;
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("ingrese un valor para la fila %d y la columnda %d \n",1,2);
            scanf("%d", &datos);
        }
        printf("\n");
    }
}

int main() {
    // Definición de una matriz de 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Llamada a la función pasando la matriz como parámetro
    imprimirMatriz(matriz, 3, 3);
    // me dice que son 3 filas y 3 columnas si imprimo 2 son filas

    cambiarvalores(matriz, 3, 3);

    return 0;
}