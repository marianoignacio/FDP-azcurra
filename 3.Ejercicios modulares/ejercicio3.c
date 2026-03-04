// 3) Dadas dos fechas, informar cuál es la fecha anterior. Los datos se dan según
// los siguientes casos:
// a) Cada fecha consiste en 3 números, día, mes y año.
// b) Cada fecha consiste en un único número en formato aammdd.
// c) Cada fecha consiste en un único número en formato ddmmaa.
// Puede darse el caso que las fechas sean iguales.
#include <stdio.h>

void ingresar_fecha(int *dia, int *mes, int *ano){
    printf("Ingrese una FECHA: \n");
    printf("Ingrese un día: \n");
    scanf("%d",dia);
    printf("Ingrese un mes: \n");
    scanf("%d",mes);
    printf("Ingrese un año: \n");
    scanf("%d",ano);
}

int main(){
    int dia_1,mes_1,ano_1,dia_2,mes_2,ano_2,ano,mes,dia;

    printf("fecha 1\n");
    ingresar_fecha(&dia_1,&mes_1,&ano_1);
    printf("fecha 2\n");
    ingresar_fecha(&dia_2,&mes_2,&ano_2);

    if((ano_1>ano_2) || (ano_1==ano_2 && mes_1>mes_2) || (ano_1==ano_2 && mes_1==mes_2 && dia_1>dia_2 ))
    printf("La fecha es: %d/%d/%d",dia_2,mes_2,ano_2);
    else 
        if(ano_1==ano_2 && mes_1==mes_2 && dia_1==dia_2)
        printf("SON LAS MISMAS FECHAS %d/%d/%d",dia_2,mes_2,ano_2);
    else
    printf("La fecha es: %d/%d/%d",dia_1,mes_1,ano_1);


    
}