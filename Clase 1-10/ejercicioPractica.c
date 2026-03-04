//Ingresar una serie de numeros y luego mostrar el promedio y todos los numeros superiores al promedio calculado. 
//Suponer que no se ingresan mas de 100  numeros. La carga finaliza cuando se ingrese el numero cero

#include <stdio.h>

#define MAXF 100

typedef int TVnumeros[MAXF];

int main(){

    TVnumeros vector;
    int ML=0;
    float promedio;

CargarVector(vector,&ML);
promedio=CalcularPromedio(vector,ML);
printf("El promedio es %6.2f ", promedio);

MostrarNumerosMayores(vector,ML, promedio)


    return 0,
}
