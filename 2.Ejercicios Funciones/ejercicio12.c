// 12) Escribir una función que reciba dos valores enteros, y devuelva el máximo
// común divisor entre ambos números. Recordemos que se define el máximo
// común divisor (MCD) de dos o más números enteros al mayor número entero
// que los divide sin dejar resto alguno. Utilizar el algoritmo de Euclides.

// Ejemplo:Calculemos el maximo comun divisor entre 32 y 17 por el
//  algoritmo de Euclides:
//  32=1*17+15 -> el 15 es el reiduo
//  17=1*15+2
//  15=7*2+1 -> es este
//  2=2*1+0 -> termina cuando es 0 
//  El algoritmo de Euclidestermina:El mcd entre 32 y 17 es 1.
#include <stdio.h>

int MCD(int numero1, int numero2){

    int MCD=0, resto;
    resto=numero1%numero2;
    while(resto != 0){
        numero1=numero2;
        numero2=resto;
        resto=numero1%numero2;
    }
    MCD = numero2;
    return MCD;
}

int main(){
    int resultado;
    resultado=MCD(10,5);
    printf("El MCD es: %d \n",resultado);
}