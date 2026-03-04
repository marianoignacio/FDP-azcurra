// 16) Dado un número entero positivo ingresado por el usuario, procesarlo e indicar:
// (realizar un programa diferente para cada caso)
// a) La cantidad de dígitos pares e impares que lo componen.
// b) El menor y el mayor dígito del número.
// Recordar uso de división y módulo:
// Ejemplo:
// 111 / 10 = 11
// 111 % 10 = 1
// ? 111 % 10 = 11.1 -> lo que hace esto es agarrar el 1, osea el resto. En cambio 111 / 10 = 11.1 el resultado sin el resto

#include <stdio.h>

int main(){

int numero, numeros_pares=0, numeros_impares=0, mayor,menor,digito,ultimo_digito;

printf("Ingrese un número entero positivo: ");
scanf("%d", &numero);
    ultimo_digito= numero % 10;//esto porque sino no tengo manera de comprobar algún digito para mayor o menor y hacer la comparación
    if(numero > 0){//verifico que es entero positivo
        menor=ultimo_digito;
        mayor=ultimo_digito;
        while( numero != 0 ){//hasta que se termine el número
            digito= numero % 10;//sacar digito a digito es /10(dividir por diez al número)
            numero =numero/10;
                if ((digito % 2) == 0)
                {
                    numeros_pares = numeros_pares+1;
                }
                else{
                    numeros_impares =numeros_impares+1;
                }
            if (digito > mayor)
            mayor = digito;
            else if(digito < menor)
            menor = digito;
        }
    }
    else
        printf("Ingrese un número positivo");

    printf("Cantidad de números impares: %d\n", numeros_impares);
    printf("Cantidad de números pares: %d\n",numeros_pares);
    printf("EL mayor dígitos es: %d\n",mayor);
    printf("EL menor dígitos es: %d\n",menor);

    return 0;
}
