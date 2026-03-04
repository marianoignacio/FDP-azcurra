// 4) Escribir una función que dados 2 números, calcule el porcentaje que el
// primero representa respecto del segundo.

#include <stdio.h>

float porcentaje(int numero_1, int numero_2){
    float porcentaje=0;

    porcentaje=(numero_2/100)*numero_1;

return porcentaje;
}

int main(){
    int numero1,numero2,resultado;

    printf("Ingrese un porcentaje :\n");
    scanf("%d",&numero1);
    printf("Ingrese el número para sacar el porcentaje del primer número:\n");
    scanf("%d",&numero2);
resultado=porcentaje(numero1,numero2);
    printf("El %d porciento de %d es: %d%%\n",numero1,numero2,resultado);

}