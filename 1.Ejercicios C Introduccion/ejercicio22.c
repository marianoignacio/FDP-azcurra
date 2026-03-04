// 22) Se tiene un listado de alumnos que consiste en número de padrón y 4 notas por
// alumno. Informar el mayor y el menor promedio registrado junto con el número de
// padrón del alumno, suponiendo que ambos son únicos.
#include <stdio.h>
#include <stdbool.h>
#define NOTAS 4

float prom_suma(){
    int i,suma = 0,nota;
    float prom = 0;
        for(i=0;i<NOTAS;i++){
        printf("Ingrese una nota\n");
        scanf("%d", &nota);
            suma=suma+nota;
        }
        prom=(float)suma/4;
    return prom;
}

void ordenar_datos( 
    float promedio,int padron, bool primer_ing, float *promedio_menor, 
    float *promedio_mayor, int *padron_menor, int *padron_mayor){
    if (primer_ing)
    {
        *padron_menor=padron;
        *padron_mayor=padron;
        *promedio_menor=promedio;
        *promedio_mayor=promedio;
    }
    else
        if(promedio >=  *promedio_mayor){
         *promedio_mayor = promedio;
        *padron_mayor = padron;
        }
    else 
        if(promedio <= *promedio_menor){
        *promedio_menor=promedio;
        *padron_menor=padron;
        }

}


int main(){
    int padron, padron_may, padron_men,nota;
    float prom_actual, prom_mayor=0, prom_menor=0;
    bool programa_continua = true, primer_ingreso=true;

while(programa_continua){
    printf("Ingrese su padrón (0 para finalizar)\n");
    scanf("%d", &padron);
    if(padron != 0){
        prom_actual=prom_suma();
        ordenar_datos(prom_actual,padron,primer_ingreso,&prom_menor,&prom_mayor,&padron_men,&padron_may);
        primer_ingreso=false;
    }
    else 
    programa_continua=false;
    }
    
    printf("\n=== RESULTADOS ===\n");
    printf("Mayor promedio: %.2f - Padron: %d\n", 
    prom_mayor, padron_may);
    printf("Menor promedio: %.2f - Padron: %d\n", 
    prom_menor, padron_men);
return 0;
}
