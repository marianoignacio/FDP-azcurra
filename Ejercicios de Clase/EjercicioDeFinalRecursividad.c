#include <stdio.h>

int division_recursiva(int numero1, int numero2){
        if(numero1 < numero2)
            return 0;
        return division_recursiva(numero1-numero2, numero2) + 1;
    
}

int main (){
    int resultado;
    resultado=division_recursiva(25,5);
    printf("El resultado es: %d", resultado);

}