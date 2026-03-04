#include <stdio.h>
#include <string.h>

char nombre[50] = "mariano molloja pinto"; 

void leer_cadena(void) {
    int i, contador = 0;
    char letra[2];

    printf("Consonantes en \"%s\":\n", nombre);

    for (i = 0; nombre[i] != '\0'; i++) {
        letra[0] = nombre[i];
        letra[1] = '\0';

        if (letra[0] >= 'a' && letra[0] <= 'z' && strstr("aeiou", letra) == NULL) {
            printf("%c\n", letra[0]);
            contador++;
        }
    }

    printf("\nTotal de consonantes: %d\n", contador);
}

int main(void) {
    leer_cadena();
    return 0;
}
