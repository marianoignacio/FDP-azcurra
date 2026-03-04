// 5) Escribir una función que dados a y b ambos de tipo entero devuelva a ^ b de
// tipo double para los siguientes casos (no se puede utilizar ninguna biblioteca
// de funciones matemáticas). Implementar una solución iterativa.
// En las pruebas debe invocar a la función para los siguientes 5 casos:
// i) a > 0 y b > 0
// ii) a < 0 y b > 0
// iii) a < 0 y b > 0
// iv) a < 0 y b < 0
// v) a > 0 y b = 0
// Ejemplos:
// i) a = 2 ; b = 3 ; resultado = 8
// ii) a = -2 ; b = 3 ; resultado = -8
// iii) a = -2 ; b = 0 ; resultado = 1
// iv) a = -2 ; b = 0 ; resultado = 1
#include <stdio.h>

double potencia(int a, int b){
    double potencia=1;
    int i;

    // if(a==1)
    // potencia=1;
    // // else if(a>0)
    // else if( a == 0)
    // potencia=1;

    if(b>0){
        for(i=0;i<b;i++)
            potencia=potencia*a;
    }else if(b<0){
        for(i=0;i<(-b);i++){
            potencia=a*potencia;}
            potencia=1/potencia;}
    else if(b==0)
        potencia=1;


    return potencia;
}

int main(){
    int numero, exponenete;
    double resultado;
    printf("Ingrese un número: \n");
    scanf("%d",&numero);
    printf("Ingrese una potencia: \n");
    scanf("%d",&exponenete);

    resultado=potencia(numero,exponenete);
    printf("%d^%d es: %f",numero,exponenete,resultado);

}