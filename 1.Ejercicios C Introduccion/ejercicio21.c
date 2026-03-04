// 21) Se dan como datos de entrada las fechas de nacimiento (día, mes, año) y los números
// de DNI de cada integrante de un grupo.
// Se indica fin de datos de entrada cuando día = 0.
// Muestre por pantalla el número de DNI del integrante más joven del grupo.

#include <stdio.h>

int main(){
    int dia, mes,ano, dni,integrante_joven,dia_joven, mes_joven,ano_joven;

    printf("Ingrese sus datos, si se ingresa dia = 0 se termina\n");
    printf("Ingrese su DNI: \n");
    scanf("%d",&dni);
    printf("Ingrese un año: \n");
    scanf("%d",&ano);
    printf("Ingrese un mes: \n");
    scanf("%d",&mes);
    if(mes >= 1 || mes <= 12){
        printf("Ingrese un dia: \n");
        scanf("%d",&dia);
    else 
        printf("Ingrese un mes válido");}

    dia_joven=dia;
    mes_joven=mes;
    ano_joven=ano;
    integrante_joven=dni;

while(dia != 0){
    printf("Ingrese sus datos, si se ingresa dia = 0 se termina\n");
    printf("Ingrese su DNI: \n");
    scanf("%d",&dni);
    printf("Ingrese un año: \n");
    scanf("%d",&ano);
    printf("Ingrese un mes: \n");
    scanf("%d",&mes);
    printf("Ingrese un dia: \n");
    scanf("%d",&dia);

        if(ano >= ano_joven)
        {
            ano_joven=ano;
        }
        if(mes < mes_joven){
            mes_joven=mes;
            }
        if(dia < dia_joven)
                {dia_joven=dia;
                }
    integrante_joven=dni;
    printf("\n");
}
if (dia != 0)
    printf("El integrante más joven es: %d",dni);
else
    printf("ingresaste día inválido");


    return 0;
}