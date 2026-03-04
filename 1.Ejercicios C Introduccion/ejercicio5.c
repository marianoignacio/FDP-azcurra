// 5) Ingresar un número entero y decir si:
//  a) es par o impar.
//  b) es mayor, menor o igual a cero.

#include <stdio.h>

int main(){
    int numero;
    printf("Ingrese un número entero: \n");
    scanf("%d",&numero);
    
    if(numero % 2 == 0)
        printf("El número %d es par \n", numero);
    else
        printf("El número %d es impar \n", numero);

    if(numero>0)
        printf("El número es mayor a 0 \n");
    else if(numero<0)
        printf("El número es menor a 0 \n");
    else
        printf("El número es 0");
    return 0;
}