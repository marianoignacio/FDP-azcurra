#include <stdio.h>
#include <string.h>
#define MAX_NOM 100
#define MAX 100 
typedef char String[MAX_NOM];
typedef struct {
    int    DNI;
    String Nombre;
    String Email;
    int    Sede;
} TRegistro;

typedef TRegistro TTabla[MAX];


int main(){
    FILE *Archivo;
    TTabla tabla;
    int ML=0;
    cargar(&Archivo,tabla,&ML);
    ordenar(tabla,ML);
    mostrar(tabla,ML);  
}

void cargar(FILE *archivo, TTabla tabla, int *ML) {
    TRegistro Reg;
    *ML = 0;
    fread(&Reg, sizeof(TRegistro), 1, archivo);
    while (!feof(archivo) && *ML < MAX) {
        tabla[*ML] = Reg;
        (*ML)++;
        fread(&Reg, sizeof(TRegistro), 1, archivo);
    }
}

void ordenar(TTabla tabla, int ML){
  int i, j, cmp;
  TRegistro aux;
  // método burbujeo
  for (i = 1; i < ML ; i++) {
    for ( j = 0; j < ML-i; j++) {      
        cmp = strcmp(tabla[j].Nombre, tabla[j+1].Nombre);
        if (cmp > 0) {
            aux = tabla[j]; 
            tabla[j] = tabla[j+1]; 
            tabla[j+1] = aux; 
        } 
    }
  }
}

void mostrar(TTabla tabla, int ML) {
  int i;

  for (i = 0; i < ML; i++) {
    printf("Alumno %d:\n", i + 1);
    printf("DNI: %d.\n", tabla[i].DNI);
    printf("Nombre: %s.\n", tabla[i].Nombre);
    printf("Email: %s.\n", tabla[i].Email);
    printf("Sede: %d.\n", tabla[i].Sede);
  }
}