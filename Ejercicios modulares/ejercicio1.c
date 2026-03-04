// Resuelva los siguientes ejercicios en lenguaje C.
// Escribir los programas modulares correspondientes a los siguientes problemas
// utilizando funciones.
// 1) Escribir un programa donde el usuario ingrese una secuencia de números
// terminada en cero y se le informe la cantidad de múltiplos de 2, 3, 5 y 7. Utilizar
// una función que dados dos números como parámetros por valor devuelve un
// valor boolean que indique si el primero es o no múltiplo del segundo.
// Ejemplo:
// Números ingresados: 35, 20, 14, 21, 2
// múltiplos de 2: 3
// múltiplos de 3: 3
// múltiplos de 5: 2
// múltiplos de 7: 3
#include <stdio.h>
#include <stdbool.h>

#define MULTIPLO2 2
#define MULTIPLO3 3
#define MULTIPLO5 5
#define MULTIPLO7 7

void ingreso(){
    int numero, multiplo2=0,multiplo3=0,multiplo7=0,multiplo5=0; 
    do{
    printf("Ingrese un número para la secuencia: (ingrese 0 para finalizar) ");
    scanf("%d",&numero);
    
    if((numero % MULTIPLO2) == 0)
    multiplo2=multiplo2+1;
    if((numero % MULTIPLO3) == 0)
    multiplo3=multiplo3+1;
    if((numero % MULTIPLO5) == 0)
    multiplo5=multiplo5+1;
    if((numero % MULTIPLO7) == 0)
    multiplo7=multiplo7+1;
    }while(numero !=0);

    printf("Cantidad de multiplos de 2: %i\n", multiplo2);
    printf("Cantidad de multiplos de 3: %i\n", multiplo3);
    printf("Cantidad de multiplos de 5: %i\n", multiplo5);
    printf("Cantidad de multiplos de 7: %i\n", multiplo7);

}

bool verificar(int numero_ingresado, int multiplo){
    bool verificacion = false;

    if((numero_ingresado % multiplo)== 0)
    verificacion=true;

    return verificacion;
}

int main(){
    int numero1, lista, numero2;
    bool es_multiplo;

    printf("ingrese un número: \n");
    scanf("%d",&numero2);
    printf("ingrese un posible múltiplo: \n");
    scanf("%d",&numero1);

    es_multiplo=verificar(numero2,numero1);

    if(es_multiplo)
    printf("%d es multiplo de %d\n",numero1,numero2);
    else
    printf("%d  No es multiplo de %d\n",numero1,numero2);

    ingreso();
}