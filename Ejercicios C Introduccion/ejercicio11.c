// 11) Dado un número n, informar los n primeros términos de la sucesión geométrica de
// razón 3 (1, 3, 9, 27, etc.).

#include <stdio.h>

int main(){
int n, i, potencia =1;
    printf("Escriba un número que va a ser la cantidad que va aparecer: \n");
    scanf("%d", &n);
if (n < 0)
    printf("Ingrese un número mayor a 0");
else if (n == 0)
    printf("La potencia de 3 a la %d es 1", n);
    // For o while? Se puede saber cuantos va a hacer?
else{
printf("Los primeros %d terminos son: ",n);
for (i=1; i <= n; i++)
{
printf(" %d ",potencia);//SI QUIERO QUE APAREZCA EL 1 ADELANTE TENGO QUE PONER PRINT PRIMERO
potencia= 3* potencia; //no se me ocurrio lo tuve que buscar
//creas otra variable, en este caso potencia para no tocar i, porque es la iteración ni tocar n que es el número
}
}
return 0;
}