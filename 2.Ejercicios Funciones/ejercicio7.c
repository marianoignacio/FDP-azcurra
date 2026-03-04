// 7) Escribir una función que dados a y b devuelva el cociente de la división
// entera, sin utilizar el operador correspondiente del lenguaje. Para esta
// resolución deben considerar la utilización de restas sucesivas.
#include <stdio.h>

int cociente(int a, int b){//porque dice division entera
    int division;
    // int resta,cociente=0;

    // resta=b;
if(b!=0){
    for(division=0;b<=a;division++){
    a=a-b;
    // cociente=cociente+1;
    }
}
    return division;
}

int main(){
    int divisor,dividendo,resultado;

    printf("Ingrese un dividendo:\n");//numero grande
        scanf("%d",&dividendo);
            printf("Ingrese un divisor: distinto de 0\n");//numero chico
        scanf("%d",&divisor);

    resultado=cociente(dividendo,divisor);
    printf("\nEl resultado es: %d",resultado);
}