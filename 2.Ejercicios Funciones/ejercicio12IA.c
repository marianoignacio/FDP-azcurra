#include <stdio.h>
int calcular_mcd(int a, int b)
{
    int resto, mcd;
    int iteracion;
    
    iteracion = 0;
    resto = a % b;
    
    printf("Inicio: a=%d, b=%d, resto=%d\n", a, b, resto);
    
    while (resto != 0)
    {
        iteracion++;
        a = b;
        b = resto;
        resto = a % b;
        printf("Iter %d: a=%d, b=%d, resto=%d\n", iteracion, a, b, resto);
    }
    
    mcd = b;
    printf("MCD final: %d\n\n", mcd);
    
    return mcd;
}

int main(){
    calcular_mcd(32, 17);
}
