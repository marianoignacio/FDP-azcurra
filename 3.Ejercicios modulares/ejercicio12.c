// 12) Solicitar al usuario un número natural positivo entre 1 y 20. En el caso que el
// número ingresado este fuera de rango indicarle al usuario y solicitarlo
// nuevamente.
// Luego si el numero ingresado es primo se pide mostrar como resultado el
// factorial del mismo, en el caso que no sea primo se pide mostrar como
// resultado la suma n-ésima parcial del número -> (n*(n+1))/2
#include <stdio.h>
#include <stdbool.h>

bool n_primo(int numero){
int i;
bool primo=true;//para los casos 3,5y7
    

    if(numero<=1)
    primo=false;
    else 
        if(numero==2)
        primo=true;
    else
        if(numero %2==0)
        primo=false;
    else
    {
        for(i=3;i*i<= numero && primo==true;i=i+2)
        {
            if(numero%i==0)
            primo=false;
        }
    }
return primo;
}


int main(){
    int numero,i,factorial=1;
    bool es_primo;

    do{
    printf("ingrese un numero entre 1 y 20\n");
    scanf("%d",&numero);
    }while(numero > 20 || numero < 0);


    es_primo=n_primo(numero);

    if(es_primo){
        for (i = 1; i < (numero+1); i++)
        {
            factorial = factorial * i;
        }
        printf("el factorial es: %d",factorial);
    }
    else
        printf("suma enesima: %d\n",(numero*(numero+1))/2);

}