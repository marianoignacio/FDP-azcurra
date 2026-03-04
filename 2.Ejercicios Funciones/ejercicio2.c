// 2) Escribir una función que dado un número entero, devuelva un valor booleano
// que indique si dicho número es primo o no. Antes de plantear una solución ten
// presente las siguientes preguntas.
// a) Con sólo encontrar un divisor del número a evaluar distinto a uno y a sí
// mismo, ya puedo afirmar que el número no es primo. ¿Tiene sentido seguir
// evaluando más divisores?
// b) Teniendo en cuenta que todo número par a excepción del 2, no es primo,
// ¿Tiene sentido seguir en un ciclo, si al calcular el resto de la división del número
// a evaluar por 2, el resultado es cero?
// c) Puedo encontrar un divisor del número a evaluar que sea mayor al número a
// evaluar dividido 2?


#include <stdio.h>
#include <stdbool.h>

bool primo(int n){
    int divisores=1, primo=0,par;
    float resto;
    bool es_primo=false;

        par=n%2;
        if(par != 0){
            for(divisores=1;divisores<=n;divisores++){
            resto=n%divisores;
            if(resto == 0 )
            primo=primo+1;
    }
}
    if(primo==2)
        es_primo=true;
    return es_primo;
}

int main(){
    int numero,resultado;
    printf("Ingrese un valor: \n");
    scanf("%d",&numero);

    resultado=primo(numero);

    if(resultado)
    printf("Es Primo\n");
    else
    printf("No es primo\n");
}