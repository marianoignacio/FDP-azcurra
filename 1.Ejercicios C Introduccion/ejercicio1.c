//  1) Hallar la superficie de un triángulo conociendo la base y la altura. Solicitarle los
//  datos de entrada al usuario

#include <stdio.h>

int main(){
    float superficie, base, altura ;
    printf("Para hallar la superficie de un triangulo necesito que ingrese una medida de una base: \n");
    scanf("%f", &base);
    printf("Necesito que ingrese la altura del tríangulo: \n");
    scanf("%f", &altura);
    superficie = (base*altura)/2;
    printf("La superficie del triángulo es : %f \n", superficie);
    return 0;
}