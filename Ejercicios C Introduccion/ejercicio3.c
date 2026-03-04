//3) Ingresar el radio de una esfera y calcular el volumen.

#include <stdio.h>
#define PI  3.14 

int main(){
    float radio, volumen;
    
    printf("Vamos a calcular el volumen de una esfera y para ello: \n");
    printf("Ingrese el radio de la esfera a calcular: \n");
    scanf("%f", &radio);

    volumen=(4.0/3.0)*PI*radio*radio*radio;

    printf("El volumen de la esfera es: %.2f, la cuenta es (4/3)xPIx(%.2f)^3,", volumen, radio);
    return 0;
}