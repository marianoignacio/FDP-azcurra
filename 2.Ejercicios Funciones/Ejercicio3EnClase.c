// Escribir una función que reciba un valor y calcule el factorial del mismo.
// No debe imprimir el valor, debe solamente devolverlo.
// Si no se puede calcular el factorial del valor recibido, la función deberá devolver 
// 0, de lo contrario deberá devolver el valor calculado. 

// Invocarla para los valores -8, 0, 1, 5; mostrando en cada caso lo que devuelve.

// Definición: El factorial de un entero positivo n,  se define como el producto 
// de todos los números enteros positivos desde 1 hasta n.  El factorial de 0 es 1.

#include <stdio.h>

int factorial_numero(int valor)
{
int factorial=1, reps=0;

if (valor < 0) {
        printf("No se puede calcular el factorial de un número negativo.\n");
        factorial=0;}
        else if (valor==0)
        printf("El factorial de 0 es 1\n");
        else{
        for ( reps = 1; reps <= valor; reps++) {
            factorial = factorial * reps;
        }
    }
    return factorial;
}
int main()
{
    printf("el valor del factorial de -8 es: = %i\n",factorial_numero(-8));
    printf("el valor del factorial de 0 es: = %i\n",factorial_numero(0));
    printf("el valor del factorial de 1 es: = %i\n",factorial_numero(1));
    printf("el valor del factorial de 5 es: = %i\n",factorial_numero(5));

}

