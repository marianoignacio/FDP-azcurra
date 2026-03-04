// Resuelva los siguientes ejercicios en lenguaje C.
// Para la solución de los siguientes ejercicios, no debes imprimir resultados dentro de las
// funciones que escribas. Los resultados deben ser devueltos mediante el return de la
// función.
// Importante:
// Luego de escribir cada función, probala, invocándola desde el bloque principal del
// programa, pasándole distintos valores para que la prueba contemple varias
// alternativas y así estar seguro que funciona adecuadamente.
// 1) Escribir una función que reciba un valor n, entero, y devuelva la suma de los
// valores entre 0 y n.
// Ejemplos:
// suma_n(5) = 15
// suma_n(120) = 7260
// suma_n(120120) = 7214467260

#include <stdio.h>

int suma_n(int n){
    int suma=0,i;
    for(i=0;i<=n;i++)
    {
    suma=suma+i;    
    }
    return suma;
}

// void imprimir(int *suma){
//     printf("%d",*suma);
// }

int main(){
    int resultado,numero;
    printf("Ingrese un valor: \n");
    scanf("%d",&numero);

    resultado= suma_n(numero);//Guardo el valor del return dentro de una variable y despues la puedo usar
    printf("la suma de los valores entre 0 y %d es :%d",numero,resultado);
    // imprimir(&resultado);
return 0;
}