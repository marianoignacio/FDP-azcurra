#include <stdio.h>
#include <stdbool.h>

#define NOTAS 4

// Solicita las 4 notas de un alumno y calcula el promedio
float calcular_promedio_alumno()
{
    int i, nota;
    float suma, promedio;
    
    suma = 0;
    
    for (i = 0; i < NOTAS; i++)
    {
        printf("  Ingrese nota %d: ", i + 1);
        scanf("%d", &nota);
        suma = suma + nota;
    }
    
    promedio = suma / NOTAS;
    
    return promedio;
}

// Procesa un alumno y actualiza el mayor y menor promedio si corresponde
void procesar_alumno(int *padron_mayor, float *promedio_mayor,
                     int *padron_menor, float *promedio_menor,
                     bool es_primer_alumno)
{
    int padron;
    float promedio_actual;
    
    printf("\nIngrese el numero de padron (0 para finalizar): ");
    scanf("%d", &padron);
    
    if (padron == 0)
        return;
    
    printf("Ingrese las %d notas del alumno:\n", NOTAS);
    promedio_actual = calcular_promedio_alumno();
    
    printf("Promedio del alumno %d: %.2f\n", padron, promedio_actual);
    
    // Si es el primer alumno, inicializo mayor y menor con sus datos
    if (es_primer_alumno == true)
    {
        *padron_mayor = padron;
        *promedio_mayor = promedio_actual;
        *padron_menor = padron;
        *promedio_menor = promedio_actual;
    }
    else
    {
        // Actualizo el mayor si corresponde
        if (promedio_actual > *promedio_mayor)
        {
            *padron_mayor = padron;
            *promedio_mayor = promedio_actual;
        }
        
        // Actualizo el menor si corresponde
        if (promedio_actual < *promedio_menor)
        {
            *padron_menor = padron;
            *promedio_menor = promedio_actual;
        }
    }
}

int main()
{
    int padron;
    int padron_mayor, padron_menor;
    float promedio_mayor, promedio_menor;
    bool continuar, es_primer_alumno;
    
    padron_mayor = 0;
    padron_menor = 0;
    promedio_mayor = 0;
    promedio_menor = 0;
    continuar = true;
    es_primer_alumno = true;
    
    printf("=== SISTEMA DE REGISTRO DE PROMEDIOS ===\n");
    printf("Se solicitaran %d notas por alumno\n", NOTAS);
    
    while (continuar == true)
    {
        printf("\nIngrese el numero de padron (0 para finalizar): ");
        scanf("%d", &padron);
        
        if (padron == 0)
        {
            continuar = false;
        }
        else
        {
            printf("Ingrese las %d notas del alumno:\n", NOTAS);
            float promedio_actual = calcular_promedio_alumno();
            
            printf("Promedio del alumno %d: %.2f\n", padron, promedio_actual);
            
            if (es_primer_alumno == true)
            {
                padron_mayor = padron;
                promedio_mayor = promedio_actual;
                padron_menor = padron;
                promedio_menor = promedio_actual;
                es_primer_alumno = false;
            }
            else
            {
                if (promedio_actual > promedio_mayor)
                {
                    padron_mayor = padron;
                    promedio_mayor = promedio_actual;
                }
                
                if (promedio_actual < promedio_menor)
                {
                    padron_menor = padron;
                    promedio_menor = promedio_actual;
                }
            }
        }
    }
    
    if (padron_mayor != 0)
    {
        printf("\n=== RESULTADOS ===\n");
        printf("Mayor promedio: %.2f - Padron: %d\n", 
               promedio_mayor, padron_mayor);
        printf("Menor promedio: %.2f - Padron: %d\n", 
               promedio_menor, padron_menor);
    }
    else
    {
        printf("\nNo se ingresaron alumnos.\n");
    }
    
    return 0;
}