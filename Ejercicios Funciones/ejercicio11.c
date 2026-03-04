// 1) Escribir una función que dado un código numérico de m dígitos, retorne un 
// sub-código consistente en una cantidad 0 < n < m de dígitos a partir del k-ésimo 
// lugar a contar del dígito menos significativo.  
// Los parámetros de la función deben ser: código, n y k. 
// En el caso que los parámetros no sean consistentes y la extracción no puede 
// realizarse la función debe retornar -1. 
// Si el sub-código contiene ceros a izquierda serán ignorados en el valor 
// entregado como resultado. 
#include <stdio.h>

int sub_codigo(int codigo, int n, int k){
int m=0,nuevo_codigo = -1, i, resto,cod;

cod=codigo;
    while(cod != 0){
        m++;
        cod= cod/10;
    } //saca la cantidad de carácteres del código y lo guarda en m

    if(m > n){
        nuevo_codigo=codigo;
        while(i!=k){
        i++;
        resto= nuevo_codigo % 10;
        nuevo_codigo= nuevo_codigo / 10;
        }
    }


    cod=nuevo_codigo;
    nuevo_codigo=0;
    i=0;
    while(i != n){
        resto = cod % 10;
        cod = cod/10;
        if(resto !=0)
            nuevo_codigo = nuevo_codigo*10 +resto;
        i++;
    }

    return nuevo_codigo;
}
int main(){
    int codigo= 48573628;
    int cantidad_caracteres=4;
    int donde_empiza_desde_derecha=3;
    int resultado;
    resultado= sub_codigo( codigo,cantidad_caracteres ,donde_empiza_desde_derecha);
    printf("res: %d: ",resultado);
}