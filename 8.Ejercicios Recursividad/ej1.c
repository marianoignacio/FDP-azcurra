// 1) Desarrollar un programa que calcule la factorial de un número en forma 
// recursiva.  
#include <stdio.h>

int factorial(int numero){
    if(numero == 0)
        return 1;
    return numero * factorial(numero - 1);
} 

// int main(){
//     int numero = 6;
//     printf("EL factorial de %i , %i", numero, factorial(numero));
//     return 0;
// }