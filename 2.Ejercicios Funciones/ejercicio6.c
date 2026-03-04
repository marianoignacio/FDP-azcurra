// 6) Escribir una función que dado un número entero positivo retorne un valor
// booleano que indique si el mismo es capicúa (palindromo).
#include <stdio.h>
#include <stdbool.h>

bool capicua(int numero){
    bool es_capicua=false;
    int i, alreves=0,digito,original;

    original=numero;
    
    if(numero !=0)
        while(numero!=0){
            digito=numero%10;//le saco el último digito
            alreves= alreves * 10+digito;//se lo multilica por 10 para agregarle un 0 al final y dsp sumarle el diigito
            numero=numero/10;//le sacp el último digito
        }


    if(original==alreves)
        es_capicua=true;

        return es_capicua;
    
    }

int main(){
        int numero;
        bool capi;

        printf("Ingrese un número:\n");
        scanf("%d",&numero);

        capi=capicua(numero);
        if(capi)
        printf("Es capicua");
        else
        printf("No es capicua");
        }