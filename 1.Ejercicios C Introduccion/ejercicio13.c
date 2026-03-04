// 13) Solicitar un número entero positivo al usuario y calcular su factorial. En el caso de
// ingresar un número negativo mostrar un mensaje que diga “no se puede calcular el factorial
// del número ingresado”.
// Recordar que por definición factorial(0)=1 y factorial(1)=1

#include <stdio.h>

int main(){
    int num,i ,factorial = 1;
    printf("Ingrese un número positivo para calcular su factorial: \n");
    scanf("%d", &num);

    if (num < 0 )
    printf("No se puede calcular el factorial del número ingresado");
    else if ( num == 1)
    printf("El factorial de %d es: 1",num);
    else if ( num == 0)
    printf("El factorial de %d es: 1",num);
    else
    {
        for (i = 1; i < (num+1); i++)
        {
            factorial = factorial * i;
        }
    printf("El factorial de %d es: %d ",num,factorial);
    }
    return 0;
}