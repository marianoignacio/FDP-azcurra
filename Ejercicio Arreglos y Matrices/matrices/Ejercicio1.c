// 1) Dada una matriz de 3x4, escribir un programa que permita cargar sus datos y
// luego mostrarlos.
#include <stdio.h>

#define COL 4
#define FIL 3

typedef int tm_matriz[FIL][COL];
//INICIO DEL PROGRAMA

void cargar_matriz(tm_matriz matriz){
    int i,j;

    printf("ingrese los datos de la matriz %dx%d\n",FIL,COL);
    for(i=0;i<FIL;i++){
        for (j = 0; j < COL;j++){
        printf("Ingrese un número en la fila %d columna:%d\n",i+1,j+1);
        scanf("%d",&matriz[i][j]);}
    }
}

void imprimir_matriz(tm_matriz matriz){
    int i,j;

    printf("La matriz es:\n");
    for(i=0;i<FIL;i++){
        for(j=0;j<COL;j++){
        printf("  %d  ",matriz[i][j]);
        }
        printf("\n");
    }
    
}


int main(){
tm_matriz matriz;
cargar_matriz(matriz);
imprimir_matriz(matriz);

    return 0;
}

//FIN DEL PROGRAMA