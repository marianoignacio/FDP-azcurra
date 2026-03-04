#include <stdio.h>

#define MAX_FILAS 100
#define MAX_COLUMNAS 100

typedef int tv_matriz[MAX_FILAS][MAX_COLUMNAS];

void definir_dimensiones(int *filas, int *columnas)
{
    printf("Ingrese la cantidad de filas: ");
    scanf("%d", filas);
    printf("Ingrese la cantidad de columnas: ");
    scanf("%d", columnas);
}

int validar_numero(void)
{
    int numero;
    do {
        printf("Ingrese un número entre 0 y 100: ");
        scanf("%d", &numero);
        if (numero < 0 || numero > 100)
            printf("Error. El número debe estar entre 0 y 100.\n");
    } while (numero < 0 || numero > 100);
    return numero;
}

void armar_matriz(tv_matriz matriz, int filas, int columnas)
{
    int i, j;
    printf("\nCargando matriz de %d filas x %d columnas...\n", filas, columnas);

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            matriz[i][j] = validar_numero();
        }
    }
}

void imprimir_matriz(tv_matriz matriz, int filas, int columnas)
{
    int i, j;
    printf("\nMatriz cargada:\n");

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%3d", matriz[i][j]); // ancho fijo para que se vea prolijo
        }
        printf("\n");
    }
}

int main(void)
{
    tv_matriz matriz;
    int filas, columnas;

    definir_dimensiones(&filas, &columnas);
    armar_matriz(matriz, filas, columnas);
    imprimir_matriz(matriz, filas, columnas);

    return 0;
}
