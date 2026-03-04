//  6) Ingresar tres números y hallar el mayor.

#include <stdio.h>

int main(){
    int numero1, numero2, numero3;
    printf("Ingreso 3 números: \n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);
    scanf("%d", &numero3);

    if((numero1 >= numero2) && (numero1 >= numero3))
        printf("El %d es más grande", numero1);
    else if((numero2 >= numero3) && (numero2>numero1))
        printf("El %d es más grande",numero2);
    else
        printf("El %d es más grande", numero3);

        
    return 0;
}