/*
  Práctica de archivos te texto plano.
  Programa que esribe en un archivo de texto plano llamado "mensajes.txt"
  Se lee la entrada por teclado del usuario hasta el salto de linea.
  Luego ese contenido es guardado en el archivo de texto.

  Se le solicitan nuevos mensajes al usuario hasta que ingresa la palabra "esc".
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define STRING_SIZE 1000
#define INPUT_FILE "mensajes.txt"

typedef char string_t[STRING_SIZE];

void gets_string(string_t s) {
  fflush(stdin);                // limpia buffer de entrada
  fgets(s, STRING_SIZE, stdin); // lee la entrada de usuario hasta el caracter salto de linea
  s[strcspn(s, "\n")] = '\0';   // remueve el caracter salto de linea agregado por fgets
}

bool continuar(string_t s) {
  return (strcmp(s, "esc") != 0); // si el usuario ingresa "esc" no se debe continuar
}

void leer_mensaje(string_t s) {
  printf("Ingrese mensaje (o bien 'esc' para finalizar): ");
  gets_string(s);
}

int main() {
  FILE *arch;
  string_t linea;

  arch = fopen(INPUT_FILE, "w");        

  if (arch == NULL)
    printf("No se pudo crear el archivo %s \n", INPUT_FILE);
  else {

    leer_mensaje(linea);
    while (continuar(linea)) {
      fprintf(arch, "%s\n", linea);
      leer_mensaje(linea);
    }

    fclose(arch);
  }

  return 0;
}