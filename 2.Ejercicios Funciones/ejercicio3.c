// 3) Escribir una función que reciba un valor entero y calcule el factorial del
// mismo. Si no se puede calcular el factorial del valor recibido, la función deberá
// devolver 0, de lo contrario deberá devolver el valor calculado.

#include <stdio.h>

int factorial(int numero){
    int i ,factorial = 1;

    if (numero < 0 ){
    printf("No se puede calcular el factorial del número ingresado\n");
    factorial = 0;}
    else 
        if ( numero == 1)
    printf("El factorial de %d es: ",numero);
    else
    {
        for (i = 1; i <= numero; i++)
        {
            factorial = factorial * i;
        }
    }
    return factorial;
}


int main(){
    int num, resultado;
    printf("Ingrese un número positivo para calcular su factorial: \n");
    scanf("%d", &num);
    resultado=factorial(num);

    printf("%d",resultado);
}