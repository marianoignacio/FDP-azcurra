// 14) Escribir un programa que muestre las tablas de multiplicar 
// desde la tabla del 1 hasta la
// tabla del 9 para los primeros 100 números naturales.
#include <stdio.h>

int main(){
    int i,j, filas = 9, columnas = 9, multiplicacion;
    printf("TABLA DE MULTIPLICAR\n");

    for (i =1 ; i <= filas ; i++)
    {   
        
        for ( j = 1; j <= columnas; j++)
        {
            multiplicacion= i*j;
            printf("  %d  ", multiplicacion);
        }
        printf("\n");
    }
    }