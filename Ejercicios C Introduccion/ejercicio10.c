//  10)Dada una fecha con año,mes y día, informar si es correcta o no.Solicitarle los datos al 
// usuario de forma independiente.Considerar años bisiestos.

#include <stdio.h>

int main(){
int mes, dia, ano;
    printf("ingrese un día:\n ");
    scanf(" %d",&dia);
    printf("ingrese un mes:\n ");
    scanf(" %d",&mes);
    printf("ingrese un año:\n ");
    scanf(" %d",&ano);
    if ( dia > 0 && dia < 31)
    {
    printf ("Día correcto");
    }
    else if ( mes < 12 && mes > 0){
        printf("El mes es correcto");
        }   
        else
        {
        printf("ingrese un mes correcto");
        printf("El mes %d es incorrecto", mes);
        }
    
    return 0;
}