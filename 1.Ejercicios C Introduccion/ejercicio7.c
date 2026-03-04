/// 7) Ingresar un número (del 1 al 7) que representa un día de la semana, escribir el
//  nombre del día correspondiente. En el caso de haber ingresado un número fuera de
//  rango indicarle del error al usuario.

#include <stdio.h>
int main(){
    int numero;
    printf("Ingrese un día a la semana en números(del número del 1 al 7, empezando con 1 = lunes)\n");
    scanf("%d",&numero);

    switch(numero)
    {
        case 1:
        printf("Ingresaste Lunes");
        break;

        case 2:
        printf("Ingresaste Martes");
        break;
        
        case 3:
        printf("Ingresaste Miercoles");
        break;

        case 4:
        printf("Ingresaste Jueves");
        break;

        case 5:
        printf("Ingresaste Viernes");
        break;

        case 6:
        printf("Ingresaste Sabado");
        break;
        
        case 7:
        printf("Ingresaste Domingo");
        break;

        default:
        printf("Ingrese un número dentro del rango");

    }
}
//     if (numero==1)
        
//     else if (numero==2)
        
//     else if (numero==3)
        
//     else if (numero==4)
        
//     else if (numero==5)
//         ;
//     else if (numero==6)
        
//     else if (numero==7)
        
//     else 
        

//     return 0;
// }