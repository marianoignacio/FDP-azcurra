#include <stdio.h>
#include <stdbool.h>
#define MF 101


typedef int tv_matriz[101];

int max_cantidad_filas, max_cantidad_columnas, filas, columnas, max_filas, max_columnas;


//Esto para que el usuario pueda definir el tamaño máximo lógico de la matriz
void definir_dimensiones_maximas(int *max_filas, int *max_columnas)
{
    printf("Ingrese el máximo de filas: \n");
    scanf("%d", max_filas);
    printf("Ingrse el máximo de columnas: \n");
    scanf("%d", max_columnas);
}

void armar_matriz(tv_matriz matriz, max_filas,max_columnas)
{
    int filas,columnas ,i,j;

    printf("De cuantas filas queres que sea la matriz?: \n");
    scanf("%d", &filas);
    printf("De cuantas columnas queres que sea la matriz?: \n");
    scanf("%d", &columnas);

    if (filas <= max_filas && columnas <= max_columnas) {
        for (i = 0; i < filas; i++) {
            for (j = 0; j < columnas; j++) {
                do 
                {
                printf("Ingrese un número entre 0 y 100 para la fila: %d, columna %d: ", (i+1), (j+1));
                scanf("%d", &matriz[i][j]);
                } while (matriz[i][j] < 0 || matriz[i][j] > 100);
            }
        }

    } else 
        printf("La matriz supera las dimensiones máximas que definiste: filas %d y columnas %d\n", max_filas , max_columnas);
}


void ejercicio_3(tv_matriz matriz, filas, columnas)
{
    int contador[MF] = {0};
    int i, j, numero;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            contador[matriz[i][j]]++;
        }
    }

    for (numero = 0; numero < MF; numero++) {
        if (contador[numero] > 0)
            printf("El número %d aparece -> %d veces \n", numero, contador[numero]);
    }
}

int main(void)
{
    tv_matriz matriz;
    int max_filas, max_columnas, filas, columnas;

    definir_dimensiones_maximas(&max_filas, &max_columnas);
    armar_matriz(matriz, max_filas, max_columnas);
    ejercicio_3(matriz, filas, columnas);

    return 0;
}
