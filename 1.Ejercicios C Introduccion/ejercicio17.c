// 17) Generar un dibujo por pantalla con el siguiente patrón solicitando al usuario la altura.
// Ejemplo: altura=5 debe dibujar por pantalla:
// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main(){
    int i,altura,j;
    printf("Ingrese la altura de la figura: ");
    scanf("%d",&altura);
    for(i=1;i<=altura;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
return 0;
}