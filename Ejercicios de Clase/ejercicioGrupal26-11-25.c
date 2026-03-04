#include <stdio.h>

// 3-Mostrar números pares entre 1 y X
void mostrarPares(int numero_x){

    if(numero_x>=2)
        mostrarPares(numero_x-1);
    if(numero_x %2==0)
        printf("%d",numero_x);
}

// 4- Mostrar de a uno los dígitos de un Número
void mostrarDigitos(int numero){
    if(numero>=10){
        mostrarDigitos(numero/10);
        printf("%d",numero%10);}
    else{
        printf("%d",numero);
    }

}

// 5- Una función recursiva en C que suma los elementos en las posiciones pares de un arreglo
typedef int Tv_vector[10];
int funcionRecursiva(Tv_vector vector, int ml){
    if(ml<0)
        return 0;
    if((ml-1)%2 == 0)
        return funcionRecursiva(vector,ml-1)+vector[ml-1];
    else
        return funcionRecursiva(vector,ml-1);
}
int main(){
    int resultado, ml=9;
    Tv_vector vec={1,2,7,2,8,5,3,1,5};

    mostrarPares(19);
    mostrarDigitos(23474);
    resultado=funcionRecursiva(vec,ml);
    printf("%d",resultado);
}