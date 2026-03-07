/*
  Práctica de archivos te texto plano
  Programa que lee un archivo de texto plano llamado "mensajes.txt"
  La lectura se hace linea por linea, cada linea finaliza cuando se encuentra el caracter salto de linea.
  Se asume que cada linea no excede los 1000 caracteres incluyendo el salto de linea.
  Cada linea leida se muestra por pantalla al usuario.
*/

#include <stdio.h>
#include <string.h>
 
#define STRING_SIZE 1000
#define INPUT_FILE "mensajes.txt"

typedef char string[STRING_SIZE];

void read_line(FILE *f, string s) {
  fgets(s, STRING_SIZE, f);   // lee una linea completa hasta el salto de linea
  s[strcspn(s, "\n")] = '\0'; // remueve el caracter de salto de linea agregado por fgets
}

int main() {
  string line;
  FILE *arch;

  arch = fopen(INPUT_FILE, "r");
  if (arch == NULL) {
    printf("No se pudo abrir el archivo %s \n", INPUT_FILE);
  } else {

    read_line(arch, line);
    while(!feof(arch)) {            
      printf("%s\n", line);
      read_line(arch, line);
    }
    
    fclose(arch);
  }

  return 0;
}