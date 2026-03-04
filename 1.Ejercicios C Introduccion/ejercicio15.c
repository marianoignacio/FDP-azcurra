// 15) Dada una serie de números ingresados de a uno.
// Indicar mayor, menor y promedio de la serie.
// El ingreso de números finaliza cuando el usuario ingresa 0.
#include <stdio.h>

int main(){
    int numero=0, numero_mayor, numero_menor;
    float promedio, contador=0,suma=0;

    numero_mayor=numero;
    numero_menor=numero;

    do{
    printf("Ingrese un número: ");
    scanf("%d",&numero);

        suma= suma + numero;
        // contador=1;//Porque ingresé el primer número

        if(numero_mayor==0 || numero_menor==0){
            numero_menor=numero;
            numero_mayor=numero;}

        if(numero != 0){
        contador=contador+1;//para que cuando ingrese el 0 no me cuente como 1 vez más sino que salga si pongo 0
            if(numero > numero_mayor)
            numero_mayor= numero;
                
            if(numero < numero_menor)
            numero_menor = numero;
        }
        else{
        printf("ingreso 0\n");
    }

    }
    while(numero != 0);


    // printf("Ingrese otro número :");
    // scanf("%d",&numero);
    // suma= suma + numero;


    

    promedio = suma / contador;//tuve que poner suma y contador como float, además de promedio
    printf("El promedio es: %.2f\n",promedio);
    printf("El numero mayor: %d\n",numero_mayor);
    printf("El numero menor: %d\n",numero_menor);
    

    return 0;
}