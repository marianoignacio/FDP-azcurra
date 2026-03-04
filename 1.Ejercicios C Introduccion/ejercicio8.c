//  8) Ingresar un número (del 1 al 12) que representa un mes, indicar la cantidad de
//  días de dicho mes.
#include <stdio.h>
int main(){
        int mes;
    printf("Ingrese mes del año en números(del número del 1 al 12,siendo 1 Enero) Para saber cuantos días tiene el mes\n");
    scanf("%d",&mes);

    if (mes==1)
        printf("Enero tiene 31 días\n");
    else if (mes==2)
        printf("Febrero tiene 28 días\n");
    else if (mes==3)
        printf("Marzo tiene 31 días\n");
    else if (mes==4)
        printf("Abril tiene 30 días\n");
    else if (mes==5)
        printf("Mayo tiene 31 días\n");
    else if (mes==6)
        printf("Junio tiene 30 días\n");
    else if (mes==7)
        printf("Julio tiene 31 días\n");
    else if (mes==8)
        printf("Agosto tiene 30 días\n");
    else if (mes==9)
        printf("Septiembre tiene 31 días\n");
    else if (mes==10)
        printf("Octubre tiene 31 días\n");
    else if (mes==11)
        printf("Noviembre tiene 30 días\n");
    else if (mes==12)
        printf("Diciembre tiene 31 días\n");
    else 
        printf("Ingrese un número dentro del rango\n");

    if(mes>=1 && mes % 2 ==0 && mes<=12)
        printf("El mes tiene al menos 30 días");
    else if (mes>=1 && mes % 2 != 0 && mes <=12)
        printf("El mes tiene 31 días");
    else
        printf("Ingrese un número dentro del rango");
    return 0;
}