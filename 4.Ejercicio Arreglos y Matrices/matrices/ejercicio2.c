// 2) Dada una matriz cuadrada de 5x5 cargada por el usuario con números
// enteros, escribir un programa modular que muestre:
// a) Todos los elementos de la matriz.
// b) La suma de todos los elementos de la matriz.
// c) La suma de la diagonal principal.
// d) La suma de la diagonal secundaria.
// e) La suma de los elementos del triángulo superior.
// f) La suma de los elementos del triángulo inferior.
// g) Si es una matriz diagonal (todos los elementos por fuera de la diagonal
// principal son igual a cero)
// Cada módulo debe optimizar la cantidad de iteraciones a realizar.
#include <stdio.h>
#define MAX 5
typedef int tm_matriz[MAX][MAX];

void cargar_matriz(tm_matriz matriz){
    int i,j;
    printf("Ingrese los valores de la matriz: \n");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
        printf("Ingrese en %d fila, columna %d: ",i+1,j+1);
        scanf("%d",&matriz[i][j]);}
    }
}

void nueva_matriz(tm_matriz origen,tm_matriz destino){
    int i,j;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if(j==i)
            destino[i][j]=origen[i][j];
            else
            destino[i][j]=0;
        }
    }

}

int suma_triangulo_inf(tm_matriz matriz){
    int traingulo_inf=0,i,j;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if(j<i)
            traingulo_inf=matriz[i][j]+traingulo_inf;
        }
    }

return traingulo_inf;
}

int suma_triangulo_sup(tm_matriz matriz){
    int traingulo_sup=0,i,j;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if(j>i)
            traingulo_sup=matriz[i][j]+traingulo_sup;
        }
    }

return traingulo_sup;
}

int suma_diagonal_secu(tm_matriz matriz){
    int diagonal_secu=0,i,j;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if((i+1)+(j+1)==MAX+1)
            diagonal_secu=matriz[i][j]+diagonal_secu;
        }
    }

return diagonal_secu;
}

int suma_diagonal(tm_matriz matriz){
    int diagonal=0,i,j;

    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if(i==j)
            diagonal=matriz[i][j]+diagonal;
        }
    }

return diagonal;
}

int sumar_elementos(tm_matriz matriz){
    int suma=0,i,j;

        for(i=0;i<MAX;i++)
        {
            for(j=0;j<MAX;j++){
                suma=suma+matriz[i][j];
            }
        }
        return suma;
}

void imprimir_matriz(tm_matriz matriz){
    int i,j;

    printf("La matriz es:\n");
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
        printf("  %d  ",matriz[i][j]);
        }
        printf("\n");
    }
    
}

int main(){
    int suma_elementos,total_diagonal,diagonal_secundaria, trian_sup, trian_inf;
    tm_matriz matriz_1= {
        {1, 2, 3,1,1},
        {4, 5, 6,1,1},
        {7, 8, 9,1,1},
        {1, 2, 3,1,1},
        {1, 2, 3,1,1}
    },matriz_0;
    // cargar_matriz(matriz_1);
    imprimir_matriz(matriz_1);
    // suma_elementos=sumar_elementos(matriz_1);
    // total_diagonal=suma_diagonal(matriz_1);
    diagonal_secundaria=suma_diagonal_secu(matriz_1);
    trian_sup=suma_triangulo_sup(matriz_1);
    trian_inf=suma_triangulo_inf(matriz_1);
    nueva_matriz(matriz_1,matriz_0);

    // printf("\nLa suma de los elementos es:%d\n",suma_elementos);
    // printf("\nLa suma de la diagonal principal es:%d\n",total_diagonal);
    printf("\nLa suma de la diagonal secundaria es:%d\n",diagonal_secundaria);
    printf("\nLa suma del traingulo sup es:%d\n",trian_sup);
    printf("\nLa suma del traingulo inf es:%d\n",trian_inf);
    imprimir_matriz(matriz_0);

    return 0;
}