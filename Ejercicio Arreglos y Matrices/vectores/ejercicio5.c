// 5) Cargar una serie de números reales positivos en un vector. No se conoce la
// cantidad exacta de datos, pero se sabe que no superan los 100. La serie finaliza
// cuando se ingresa cero. Informar el valor máximo, la cantidad de veces que
// aparece y la/s posición/es que ocupa.
#include <stdio.h>

#define MF 100

typedef float TV_vec[MF];

void cargar_numeros(TV_vec vector){
    int numero;
    while (numero!=0)
    printf("Ingrese una serie de número reales positivos en un vector: \n");
    printf("Los números deben ser distintos de cero\n");
    scanf("%d",&numero);

}

int main(){
    
}