// 18) Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en
// el mercado. A cada encuestado se le pregunta si consume el producto x y si consume el
// producto y. La respuesta puede ser sí o no.
// Se pide calcular e informar el porcentaje de consumidores de:
// a) del producto x
// b) del producto y
// c) del producto x solamente
// d) del producto y solamente
// e) de ambos productos
// f) de ninguno de los productos

#include <stdio.h>
//! I A, ayuda porque los caracteres no me los tomaba. 
// *( se deja espacio antes de " %c" y se pune con ' una comilla)
int main(){

    int i, encuestados = 0,respuestas_validas = 0;
    char consumo_x, consumo_y;
    float consumo = 0, porcentaje = 0, x = 0, ninguno = 0, ambos = 0, solo_x = 0, solo_y = 0, y = 0;

    /* Pedimos la cantidad de encuestados */
    printf("Ingrese la cantidad de encuestados: ");
    if (scanf("%d", &encuestados) != 1 || encuestados <= 0) {
        printf("Cantidad de encuestados no válida. Fin del programa.\n");
        return 1;
    }

    for (i = 0; i < encuestados; i++) {
    printf("Indique consume el producto x: (si=s, no=n) \n");
        /* leemos un caracter; el espacio antes de %c descarta blancos previos */
        scanf(" %c", &consumo_x);
    printf("Indique consume el producto y: (si=s, no=n) \n");
        scanf(" %c", &consumo_y);

        /* Validar entradas: convertir a minúscula si hace falta no está incluido; asumimos 's' o 'n' */
        if ((consumo_x != 's' && consumo_x != 'n') || (consumo_y != 's' && consumo_y != 'n')) {
            printf("Entrada inválida para el encuestado %d. Use 's' o 'n'. Se descartará este registro.\n", i + 1);
            continue; /* no contamos este registro */
        }

        /* Contamos este registro como válido */
        respuestas_validas++;

        /* Contadores */
        if (consumo_x == 's') x += 1.0f;
        if (consumo_y == 's') y += 1.0f;

        if (consumo_x == 's' && consumo_y == 's') {
            ambos += 1.0f;
        } else if (consumo_x == 's' && consumo_y == 'n') {
            solo_x += 1.0f;
        } else if (consumo_x == 'n' && consumo_y == 's') {
            solo_y += 1.0f;
        } else if (consumo_x == 'n' && consumo_y == 'n') {
            ninguno += 1.0f;
        }

        if (consumo_x == 's' || consumo_y == 's') {
            consumo += 1.0f;
        }
    }

    /* Para calcular porcentajes usamos la cantidad de respuestas válidas */
    if (respuestas_validas == 0) {
        printf("No hubo respuestas válidas para calcular porcentajes.\n");
        return 0;
    }

    porcentaje = 100.0f / (float)respuestas_validas;

    printf("El porcentaje de consumidores de x es: %.2f%%\n", porcentaje * x);
    printf("El porcentaje de consumidores de y es: %.2f%%\n", porcentaje * y);
    printf("El porcentaje de consumidores de solo x es: %.2f%%\n", porcentaje * solo_x);
    printf("El porcentaje de consumidores de solo y es: %.2f%%\n", porcentaje * solo_y);
    printf("El porcentaje de consumidores de ambos es: %.2f%%\n", porcentaje * ambos);
    printf("El porcentaje de consumidores de ninguno es: %.2f%%\n", porcentaje * ninguno);

    return 0;
}