#include <stdio.h>
#define FILAS 3
#define COLUMNAS 4
typedef int T_matriz[FILAS][COLUMNAS];

//Inicio del programa

void cargar_matriz (T_matriz mat){
    int i, j;
    printf("ingrese los datos de la matriz 3x4:\n");
    for(i=0; i<FILAS ; i++){
        for(j=0; j<COLUMNAS; j++){
            printf("ingrese los datos de la fila %d, columna %d: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}
void mostrar_matriz(T_matriz mat){
    int i,j;
    for(i=0; i<FILAS; i++){
        printf("\n");
        for(j=0; j<COLUMNAS; j++){
            printf(" %d ", mat[i][j]);
        }
    }
    
}

void main(){
    T_matriz mat;
    cargar_matriz(mat);
    mostrar_matriz(mat);
}

//Fin del programa