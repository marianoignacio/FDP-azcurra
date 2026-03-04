// . Escribir una función que reciba como parámetro una cadena de caracteres y 
// devuelva la cantidad de dígitos numéricos que hay en la cadena. 
#include <stdio.h>
#include <string.h>
#define MF 10

typedef char c_cadena[MF];

int recibe_cadena(c_cadena cadena){

    int i,cantidad=0;

    for(i=0;cadena[i] != '\0';i++){
        if(cadena[i] >= '0' && cadena[i] <= '9'){
            cantidad++;
        }
    }
    return cantidad;
}

int main(){

    c_cadena cadena_p = "1234568a1a";   //8 numeros +2 char + /0 ese es un espacio guardado

    printf("Hay %d digitos numericos en la cadena", recibe_cadena(cadena_p));
}