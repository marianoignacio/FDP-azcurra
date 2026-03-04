#include <stdio.h>
#include <stdbool.h>

#define NOTAS 4

int main()
{
    int padron, padron_mayor, padron_menor;
    int i, nota, suma;
    float promedio, promedio_mayor, promedio_menor;
    bool es_primero;
    
    es_primero = true;
    padron_mayor = 0;
    padron_menor = 0;
    promedio_mayor = 0;
    promedio_menor = 0;
    
    printf("Ingrese padron (0 para finalizar): ");
    scanf("%d", &padron);
    
    while (padron != 0)
    {
        suma = 0;
        
        for (i = 0; i < NOTAS; i++)
        {
            printf("Ingrese nota %d: ", i + 1);
            scanf("%d", &nota);
            suma = suma + nota;
        }
        
        promedio = suma / NOTAS;
        printf("Promedio: %.2f\n\n", promedio);
        
        if (es_primero == true)
        {
            promedio_mayor = promedio;
            padron_mayor = padron;
            promedio_menor = promedio;
            padron_menor = padron;
            es_primero = false;
        }
        else
        {
            if (promedio > promedio_mayor)
            {
                promedio_mayor = promedio;
                padron_mayor = padron;
            }
            
            if (promedio < promedio_menor)
            {
                promedio_menor = promedio;
                padron_menor = padron;
            }
        }
        
        printf("Ingrese padron (0 para finalizar): ");
        scanf("%d", &padron);
    }
    
    if (es_primero == false)
    {
        printf("\n=== RESULTADOS ===\n");
        printf("Mayor promedio: %.2f - Padron: %d\n", promedio_mayor, padron_mayor);
        printf("Menor promedio: %.2f - Padron: %d\n", promedio_menor, padron_menor);
    }
    
    return 0;
}