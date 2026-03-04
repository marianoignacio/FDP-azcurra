#include<stdio.h>

#define CAN_COLUMNAS 3

typedef int matriz_t[CANT_FILAS][CAN_COLUMNAS];

void CargarMatriz(matriz_t M);0 int main(){
int Menor;
matriz_t Matriz;
CargarMatriz(Matriz);
Menor=BuscarMenor(Matriz);
MostraMenores(Matriz, Menor);

#define CANT_FILAS 3

return 0;+