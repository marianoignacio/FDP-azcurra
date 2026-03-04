//  4) Calcular y mostrar la suma de los n primeros números naturales. Siendo n un
//  número ingresado por el usuario. Usar fórmula [ n.(n+1) ] / 2

#include <stdio.h>
int main(){
    int numero;
    int suma;

    printf("Ingrese un número: \n");
    scanf("%d",&numero);

    suma= (numero *( numero +1))/2 ;

    printf("La suma de los primeros %d numeros naturales es: %d",numero,suma);
    return 0;
}