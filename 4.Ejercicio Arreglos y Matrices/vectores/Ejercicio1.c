// 1) Dado un número n entero positivo y un listado de n números reales,
// almacenar los números en un vector según el orden de entrada.
// Informar el contenido del vector indicando la posición ocupada por cada
// número a partir de la primera posición. (1 <= n <= 100)

#include <stdio.h>
#define MF 100

typedef float T_VEC[MF];



int main(){
    int numero,i;
    T_VEC vector;
    printf("ingrese un máximo lógico:\n");//Sería el máximo lógico
    scanf("%d",&numero);

    if(numero>1 || numero <100)
    {
        for(i=0;i<numero;i++){
        printf("Ingrese %d numeros para la lista\n",numero);
        printf("%d posicion\n",i);
        scanf("%f",&vector[i]);
    }
    }

    printf("\n contenido del vector\n");
    for(i=0; i < numero; i++){
        printf("posicion %d: numero: %.0f\n", i + 1, vector[i]);
    };


    return 0;
};




