/*
    Ejemplo de uso de punteros
*/

#include <stdio.h>

int main()
{

    /* 
    * Declaramos 2 variables, una de tipo int y 
    * una de tipo int* (puntero a entero) 
    */
    int var1, var2, *p_entero, *p_otro_entero;

    /* Inicializo variables */
    p_entero = NULL;
    var1 = 5;
    var2 = 10;
    printf("var1: %d - var2: %d\n", var1, var2); /* var1: 5 - var2: 10 */

    /* Asigno a p_entero la dirección de memoria de var1 */
    p_entero = &var1;
    /* Modificamos el valor de var1 a través del puntero */
    *p_entero = 20;
    printf("var1: %d - var2: %d\n", var1, var2); /* var1: 20 - var2: 10 */

    /* 
    * Asigno a var2 lo que hay en la dirección de memoria apuntada por
    * p_entero, es decir, lo que hay en var1, 
    * entonces ahora var2 pasa a tner el valor 20
    */
    var2 = *p_entero;
    printf("var1: %d - var2: %d\n", var1, var2); /* var1: 20 - var2: 20 */
    
    /* 
    * A un puntero le podemos asignar la dirección contenida en otro puntero.
    * Como p_entero apuntaba a var1, ahora p_otro_entero también apunta a var1
    */
    p_otro_entero = p_entero;
    /* Modificar el valor de var1 a través de p_otro_entero */
    *p_otro_entero = 30;
    printf("var1: %d - var2: %d\n\n", var1, var2); /* var1: 30 - var2: 20 */

    /* 
    * Podemos conocer las direcciones de memoria involucradas
    * Utilizamos el fomateador %p para mostrar direcciones 
    * de memoria en notación hexadecimal.
    */
    printf("Direccion de var1: %p\n", &var1);
    printf("Direccion de var2: %p\n", &var2);
    printf("Direccion de p_entero: %p\n", &p_entero);
    printf("Direccion de p_otro_entero: %p\n", &p_otro_entero);
    printf("Direccion de *p_entero: %p\n", p_entero); /* Debe ser igual a la dirección de var1 */
    printf("Direccion de *p_otro_entero: %p\n\n", p_otro_entero); /* Debe ser igual a la dirección de var1 */

    printf("El tamaño de una variable puntero es de %ld bytes\n", sizeof(int*)); /* 8 bytes */
    
    printf("\n\n");
    return 0;
}

/*
var1: 5 - var2: 10
var1: 20 - var2: 10
var1: 20 - var2: 20
var1: 30 - var2: 20

Direccion de var1: 0x7ffdb0562670
Direccion de var2: 0x7ffdb0562674
Direccion de p_entero: 0x7ffdb0562678
Direccion de p_otro_entero: 0x7ffdb0562680
Direccion de *p_entero: 0x7ffdb0562670
Direccion de *p_otro_entero: 0x7ffdb0562670

El tamaño de una variable puntero es de 8 bytes
*/