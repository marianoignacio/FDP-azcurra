// 5) Dada una secuencia de números enteros ingresados por el usuario, informar
// aquellos que sean primos. El listado finaliza al ingresar cero. Al finalizar el
// ingreso se debe indicar la cantidad y la sumatoria de aquellos que fueron
// primos.
#include <stdio.h>
#include <stdbool.h>
void n_primo(int numero, bool *primo, int *nro_primo){
int i;
    *primo=true;//para los casos 3,5y7

    if(numero<=1)
    *primo=false;
    else 
        if(numero==2)
        *primo=true;
    else
        if(numero %2==0)
        *primo=false;
    else
    {
        for(i=3;i*i<= numero && *primo==true;i=i+2)
        {
            if(numero%i==0)
            *primo=false;
        }
    }

    if(*primo)
    *nro_primo=numero;

}

int main(){
    int contador=0, nro, suma=0, primos;
    bool p;

    printf("Ingrese un nro:\n");
    scanf("%d",&nro);
    while(nro!=0){
        printf("Ingrese un nro:\n");
        scanf("%d",&nro);
        n_primo(nro,&p,&primos);
        if(p){
            contador++;
            suma=suma+primos;
        }
    }

    printf("Los numeros primos son %d y su suma es :%d",contador,suma);
}