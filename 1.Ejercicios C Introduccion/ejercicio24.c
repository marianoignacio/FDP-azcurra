// 24) Un juego de un parque de diversiones, debe realizar los siguientes controles antes de
// comenzar a funcionar:
// - Sólo pueden participar quienes tengan una altura entre 1.60 m y 1.90 m
// - El peso total de los participantes no debe superar las 1.5 toneladas
// - La capacidad máxima de participantes es de 20
// Debemos programar una simulación de estos controles, para ello nuestro programa
// debe solicitar a medida que va a ingresar al juego un nuevo participante, su peso y
// su altura.
// En caso de detectar que la altura del participante no cumple con lo requerido, se debe
// enviar el siguiente mensaje: “Altura del participante fuera de rango permitido”; y se debe
// continuar con el siguiente participante.
// A medida que se procesan los ingresos de participantes, se debe controlar que el peso
// acumulado de los participantes no exceda el total permitido. Si lo excediera, debe enviar el
// mensaje: “Peso total excedido, el participante no puede subir”, dicho participante será
// ignorado y se continúa solicitando nuevos ingresos.
// En el caso que suban personas acumulando un peso exacto de 1500 el juego puede
// comenzar automáticamente.
// También a medida que se procesan los ingresos de participantes, se debe controlar que la
// cantidad de participantes no exceda el máximo establecido, por ello, si se alcanza el
// máximo, se debe informar: “Cantidad máxima de participantes alcanzada” y el juego podrá
// comenzar automáticamente si cumple con el resto.
// Por último, podría ser que suban menos personas que la capacidad máxima, entonces,
// utilizar el último ingreso de los pesos como corte de ingreso de participantes, considerando
// que si se ingresa 0 como peso, indica, que no hay más participantes.
// Pruebas a considerar:
// Prueba 1
// Participantes:
// 1 - Peso [Kg]: 90 - Altura [cm]: 180
// 2 - Peso [Kg]: 110 - Altura [cm]: 170
// 3 - Peso [Kg]: 90 - Altura [cm]: 150 (Se ignora altura no permitida)
// 4 - Peso [Kg]: 0 (Inicia el juego con 2 participantes)
// Prueba 2
// Participantes:
// 1 - Peso [Kg]: 60 - Altura [cm]: 160
// Luego suben 12 participantes de 120 Kg y 190 cm
// (Inicia el juego automaticamente por alcanzar el peso máximo)
// Prueba 3
// Participantes:
// 1 - Peso [Kg]: 100 - Altura [cm]: 175
// Luego suben 11 participantes de 120 Kg y 190 cm
// 13 - Peso [Kg]: 100 - Altura [cm]: 175 (Se ignora porque se excede el peso máximo del
// juego)
// 14 - Peso [Kg]: 0 (Inicia el juego con 12 participantes)
// Prueba 4
// Participantes:
// Suben 20 participantes de 70 Kg y 160 cm
// (Inicia el juego automaticamente por alcanzar la cantidad máxima permitida)

#include <stdio.h>
#include <stdbool.h>

#define PERS_MAX 20
#define A_MAX 190
#define A_MIN 160
#define P_MAX 1500 //1.5 toneladas


bool funcion_altura(int altura){
    bool es_valida=false;
    
    if((altura >= A_MIN) && (altura <= A_MAX))
        es_valida=true;
    else
    printf("La persona está fuera del rango: entre 1.60 y 1.90\n");

    return es_valida;
}

void funcion_peso(int peso_ingresado, int *peso_total, bool *funcionamiento){
    int peso_nuevo=0;
    bool seguir=true;

        if(peso_ingresado > 0){
            peso_nuevo = *peso_total+peso_ingresado;
                if(peso_nuevo >= P_MAX)
                printf("Peso total excedido, el participante no puede subir\n");                   
        }
        else if(peso_ingresado == 0){
            printf("El peso es %d, se entiende que no sube nadie más por lo que el ascensor comenzará\n",peso_nuevo);
            peso_nuevo=*peso_total;
            seguir=false;}
        else{
        printf("Peso negativo, se ignora y se seguirá con otra persona\n");
        peso_nuevo=*peso_total;
    }
    *peso_total = peso_nuevo;
    *funcionamiento=seguir;
}

void ascensor(){
    printf("=== CONTROL DE INGRESO AL JUEGO ===\n");
    printf("Altura permitida: %d cm a %d cm\n", A_MIN, A_MAX);
    printf("Peso maximo total: %d kg\n", P_MAX);
    printf("Capacidad maxima: %d participantes\n\n", PERS_MAX);
}

int main(){
    int altura_persona=0, peso, peso_asecensor=0, personas_ingresadas=0;
    bool altura_valida, seguir_programa;
    
    ascensor();
    seguir_programa=true;
    while(seguir_programa && personas_ingresadas <= PERS_MAX && peso_asecensor < P_MAX){
        personas_ingresadas=personas_ingresadas+1;
        printf("Ingrese su altura en cm ej: 1,70 (170cm): \n");
        scanf("%d",&altura_persona);
        altura_valida = funcion_altura(altura_persona);
            if(altura_valida){
                printf("Ingrese su peso: (0 para finalizar) \n");
                scanf("%d", &peso);
                    if(peso <= 0)
                        personas_ingresadas=personas_ingresadas-1;
                funcion_peso(peso , &peso_asecensor, &seguir_programa);
            }
            else
            personas_ingresadas= personas_ingresadas-1;
        
    }

    printf("Candidad de personas en el ascensor: %d, Peso: %d", personas_ingresadas, peso_asecensor);
    
    return 0;
}