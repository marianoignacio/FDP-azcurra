#include <stdio.h>
#include <stdbool.h>
#define MAX 10
typedef int Tv_arreglo[MAX];

bool capicua(Tv_arreglo vector, int ml){
    bool es_capicua=false;
    int i=0, alreves=0,digito, numero;
    while(vector[i]!=0){
        if(vector[i]==vector[ml])
            vector[i]=vector[i]%10;
            alreves= alreves * 10+digito;
            vector[i]=vector[i]/10;
            i++;
        }



        es_capicua=true;

        return es_capicua;
    
    }
    int main(){
        Tv_arreglo vector[] = {1, 2, 3, 2, 1};
        int ml=5;
        bool es_verdad;
        es_verdad = capicua(vector,ml);
        if (es_verdad)
        printf("El arreglo es capicua");
        else
        printf("El arreglo no es capicua");

    }