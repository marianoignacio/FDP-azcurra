// Se tiene un listado de 500 libros como máximo.
// Cada libro tiene:
// - ISBN (número 9 digitos / no correlativos)
// - Título (cadena de caracteres)
// - Fehca publicación (año, mes, día)

// Se pide:
// a) Definir las estructuras de datos y el modulo de carga de información
// b) Informar porcentaje de libros que tiene como año de publicacion a 2015.
// c) Indicar el año con mayor cantidad de libros
// d) Dar un listado de libros por isbn ascendente
// e) Dado un ISBN, informar titulo y año. Utilizar busqueda eficiente.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAMANIO 500

#define N_LIBRO 10 //teniendo en  cuenta las fechas tipo DD/MM/AAAA

#define NO_ENCONTRADO -1

typedef struct 
{
    int dia;
    int mes; 
    int anio;
}t_fecha;


/* definimos una estructura de libros */ 
typedef struct { 

    int isbn; 
    char titulo[30]; 
    t_fecha fecha[N_LIBRO];
} libro_t; 

typedef libro_t t_libro[TAMANIO]; 

void print_newline() 
{ 
printf("\n\n"); 
} 

void cargar_libros(t_libro libro, int ml) 
{ 
    int i; 
    for(i=0; i<ml; i++) { 
    printf("Ingrese datos del libro %d\n\n", i+1); 
    printf("Ingrese título del libro: "); 
    fgets(libro[i].titulo,N_LIBRO,stdin); 
    printf("Ingrese el ISBN: "); 
    scanf("%d", &libro[i].isbn); 
    printf("Ingrese la fecha de publicación: "); 
    printf("Ingrese el día: "); 
    scanf("%d", libro[i].fecha->dia);
    printf("Ingrese el mes: "); 
    scanf("%d", libro[i].fecha->mes);
    printf("Ingrese el año: "); 
    scanf("%d", libro[i].fecha->anio);

} 
    print_newline(); 
} 

void mostrar_libros(t_libro libro) 
{ 
    int i; 
    for(i=0; i<TAMANIO; i++) { 
    printf("Libro %d\n", i+1); 
    printf("titulo: %s\n", libro[i].titulo); 
    printf("ISBN: %d\n", libro[i].isbn);  
    printf("día: %s\n", libro[i].fecha->dia);
    printf("mes: %s\n", libro[i].fecha->mes);
    printf("año: %s\n", libro[i].fecha->anio); 
} 
    print_newline(); 
} 

void ordenar_mejorado(t_libro libro, int n)
{
    int i, j, aux;     
    bool continuar=true;

    // método burbujeo mejorado
    i=1;
    while (continuar && i<n) {
        continuar=false;
        for (j=0; j<n-i; j++) {
            if (libro[j].fecha->anio > libro[j+1].fecha->anio) {
                aux=libro[j].fecha->anio; 
                libro[j].fecha->anio=libro[j+1].fecha->anio; 
                libro[j+1].fecha->anio=aux;
                continuar=true;
        } 
        }
        i++;
    }
}

int busqueda_binaria(t_libro libro_valores, int buscado) {
    int inf, sup, mit;
    bool terminado; 
    int posicion;
    
    // inicializaciones
    inf = 0;
    sup = TAMANIO-1;
    terminado = false;

    while (!terminado) {
        if ((buscado < libro_valores[inf].fecha->anio) || (buscado > libro_valores[sup].fecha->anio)) {
            terminado = true; // NO ESTA => FIN DE LA BUSQUEDA
            posicion = NO_ENCONTRADO;
        } else {
            mit = inf + ((sup-inf)/2); // evitamos overflow de la suma directa

            if (libro_valores[mit].fecha->anio == buscado) {
                terminado = true; // ENCONTRADO => FIN DE LA BUSQUEDA
                posicion = mit;
            } else if(buscado > libro_valores[mit].fecha->anio) {
                inf = mit + 1;
            } else {
                sup = mit - 1;
            }
        }        
    }

    return posicion;
}

int main() 
{ 
    t_libro libro_nuevo;
    int maximo_log, anio=2015;

    printf("Ingrese la cantidad de libros: ");
    print_newline();
    scanf("%d",&maximo_log);


    cargar_libros(libro_nuevo, maximo_log);
    mostrar_libros(libro_nuevo);




return 0; 
} 