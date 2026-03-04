// 7) Escribir un programa que solicite al usuario dos números enteros positivos y
// determine el máximo común divisor entre dos números.

#include <stdio.h>

int MCD(int numero1, int numero2){

    int MCD=0, resto, numero_2;
    if(numero1<numero2)
    {
        numero_2=numero1;
        numero1=numero2;
        resto=numero1%numero_2;
        while(resto != 0){
        numero1=numero_2;
        numero_2=resto;
        resto=numero1%numero_2;
        }
    MCD = numero_2;
    }
    else
    {
        resto=numero1%numero2;
        while(resto != 0){
        numero1=numero2;
        numero2=resto;
        resto=numero1%numero2;
        }
    MCD = numero2;
    }
    
    return MCD;
}

int main(){
    int resultado=0,n1,n2;

    printf("Ingrese un nro positivo: \n");
    scanf("%d",&n1);
    printf("Ingrese un nro positivo: \n");
    scanf("%d",&n2);

    if(n1>=0 && n2>=0){
    resultado=MCD(n1,n2);
    printf("El MCD es: %d \n",resultado);
    }
    else
    printf("Ingrese 2 números positivos\n");


}