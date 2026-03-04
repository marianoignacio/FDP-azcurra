// 23) Escribir un programa que simule el proceso de control de peso y cantidad de personas
// que puede transportar un ascensor.
// Vamos a suponer que nuestro ascensor puede soportar un máximo de 400 kg y hasta 6
// personas.
// Nuestra simulación debe proceder del siguiente modo:
// - A medida que las personas ingresan al ascensor de a una a la vez, se registra el
// peso de la persona.
// - Supondremos que el ingreso de 0 kg, indica que no hay más personas por subir al
// ascensor.
// - Si en un determinado momento del ingreso de las personas, se supera el peso
// máximo, el ascensor, advertirá mediante un mensaje, que indique que se ha
// excedido el peso máximo y nuestra simulación terminará.
// - De igual modo, si el ascensor detecta que ha subido una séptima persona al
// ascensor, deberá advertir de esto, y nuestra simulación terminará.
// Por último, si habiéndose indicado que todas las personas están a bordo del ascensor y las
// condiciones establecidas se cumplen, el ascensor anunciará "ascensor en movimiento"


#include <stdio.h>
#include <stdbool.h>
#define PESOMAX 400//kg
#define PERSONASMAX 6
//INICIO DEL PROGRAMA
bool funcionamiento_ascensor(int peso, int personas){
    bool supera;
        if((peso<=PESOMAX)&&(personas <PERSONASMAX))
        supera=false;
        else
        supera=true;
return supera;
}

int main(){
    bool simulacion;
    int peso_p,cant_p=0,peso_t=0;
    do{
        cant_p+=1;
        printf("ingrese el peso de la persona %d",cant_p);
        scanf("%d",&peso_p);
        peso_t=peso_p+peso_t;
        simulacion=funcionamiento_ascensor(peso_t,cant_p);
    }while(simulacion==false); 
    if (simulacion)
    printf("asencor en movimiento");
    else
    printf("simulacion terminasda");
    //FIN DEL PROGRAMA
    
}