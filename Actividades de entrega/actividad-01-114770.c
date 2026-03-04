// Implementar la función ejercicio_3 que reciba una matriz cargada con números enteros entre 0 y 100, y el máximo lógico de filas y el de columnas de ésta.
// La función debe mostrar por pantalla los numeros que se encuentran presentes en la matriz y la cantidad de apariciones de cada uno de ellos.

// Considerar que solo se puede recorrer una vez la matriz. Está permitida la utilización de un vector auxiliar.

// Por ejemplo:
// se tiene la siguiente matriz de 3x3
// {
//   {56, 89, 56},
//   {78, 23, 11},
//   {75, 56, 11}
// }

// El resultado debe ser:
// 11 -> 2
// 23 -> 1
// 56 -> 3
// 75 -> 1
// 87 -> 1
// 89 -> 1

#include <stdio.h>
#include <stdbool.h>

#define MF 101

typdef int tv_matriz[MF];

//Como se define cual es el máximo lógico?
int max_filas, max_columnas;

void definir_dimensiones_maximas (int *max_filas, int *max_columnas);{
//definir dimensiones
printf("Ingrese el maximo logico de filas: ");
scanf("%d", &max_filas);
printf("Ingrese el maximo logico de columnas: ");
scanf("%d", &max_columnas);
return;
}

// void armar_matriz (tv_matriz matriz, int max_filas,int max_columnas);{
void armar_matriz (){
printf("Ingrese una matriz de %d filas y %d columnas\n", max_filas, max_columnas);

printf("De cuantas filas quiere que sea la matriz?");
scanf("%d", &filas);
printf("De cuantas columnas quiere que sea la matriz?");
scanf("%d", &columnas);
printf("Los numeros deben estar entre 0 y 100\n");
if (filas < max_filas && columnas < max_columnas){
    for (int i=0; i<filas; i++){
        for (int j=0; j<columnas; j++){
            printf("Ingrese un numero entre 0 y 100: ");
            scanf("%d", &matriz[i][j]);
            while (matriz[i][j]<0 || matriz[i][j]>100){
                printf("Error. Ingrese un numero entre 0 y 100: ");
                scanf("%d", &matriz[i][j]);
            }
        }
    }
} else {
    printf("Error. La matriz supera las dimensiones maximas\n");
}
return;
}


void ejercicio_3 (tv_matriz matriz, int max_filas,int max_columnas);{
    int vector[101] = {0}; //vector auxiliar para contar apariciones de numeros entre 0 y 100
    for (int i=0; i<max_filas; i++){
        for (int j=0; j<max_columnas; j++){
            vector[matriz[i][j]]++; //incrementa la posicion del numero en el vector
        }
    }
    for (int k=0; k<101; k++){
        if (vector[k] > 0){ //si el numero aparece al menos una vez
            printf("%d -> %d\n", k, vector[k]); //muestra el numero y la cantidad de apariciones
        }
    }
    return;
}