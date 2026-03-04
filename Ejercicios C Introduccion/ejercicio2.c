// 2) Calcular el sueldo de un operario ingresando por teclado la cantidad de horas que
//  trabajó en el mes y el valor de la hora. Mostrarle el resultado al usuario con un
//  mensaje adecuado.

#include <stdio.h>
int main(){
    int horas;
    float sueldo, valorHora;
    
    printf("Voy a calcular su sueldo y para eso necesito que: \n");
    printf("Ingrese la cantidad de horas que trabajó al mes: \n");
    scanf("%d",&horas);

    printf("Ingrese el valor que recibe por hora: \n");
    scanf("%f", &valorHora);

    sueldo=horas*valorHora;

    printf("El sueldo a cobrar es: %.2f",sueldo );
    return 0;
}