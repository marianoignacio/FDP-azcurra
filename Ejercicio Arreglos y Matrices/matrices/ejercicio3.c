// 3) Escribir un programa que dada una matriz de números reales, de n x m,
// devuelva un vector que en cada posición i almacene el elemento mínimo de
// cada fila i de la matriz.
// Ejemplo:
// n=3
// m=4
#include <stdio.h>

#define FILAS 3
#define COLUMNAS 4

typedef float T_matriz[FILAS][COLUMNAS];
typedef float T_vector[COLUMNAS];

void devolver_vector(T_matriz matriz_34, T_vector minimos ){

int i,j;
float minimo;

for(i=0;i<FILAS;i++)
{	
    minimo=matriz_34[i][0];
	for(j=0;j<COLUMNAS;j++){
	if(matriz_34[i][j] < minimo)
		minimo=matriz_34[i][j];
	}
	minimos[i] = minimo;
    }
} 

void imprimir_vector(T_vector vector){
int i;
for(i=0;i<FILAS;i++){
	printf(" %f ", vector[i]);
	}

}


int main(){
T_matriz matriz={
{1,2,3,4},
{1,2,3,4},
{1,2,3,4}};
T_vector vector_minimos;

devolver_vector(matriz,vector_minimos);
imprimir_vector(vector_minimos);

return 0;
}
