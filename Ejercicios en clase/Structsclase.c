#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANIO 5

/* definimos una estructura alumno */ 
typedef struct { 
    char nombre[30]; 
    int padron; 
    char email[50]; 
    int notas[2] ; 
    float promedio; 
} alumno_t; 

typedef alumno_t t_alumnos[TAMANIO]; 

void print_newline() 
{ 
printf("\n\n"); 
} 

void cargar(t_alumnos vec) 
{ 
    int i; 
    for(i=0; i<TAMANIO; i++) { 
    printf("Ingrese datos del Alumno %d\n\n", i+1); 
    printf("Ingrese el Nombre: "); 
    scanf("%s", vec[i].nombre); 
    printf("Ingrese el padron: "); 
    scanf("%d", &vec[i].padron); 
    printf("Ingrese el email: "); 
    scanf("%s", vec[i].email); 
    printf("Ingrese la nota del Parcial 1: "); 
    scanf("%d", &vec[i].notas[0]); 
    printf("Ingrese la nota del Parcial 2: "); 
    scanf("%d", &vec[i].notas[1]); 
    vec[i].promedio = (float)(vec[i].notas[0] + vec[i].notas[1])/2; 
} 
    print_newline(); 
} 

void mostrar_alumnos(t_alumnos vec) 
{ 
    int i; 
    for(i=0; i<TAMANIO; i++) { 
    printf("Alumnos %d\n", i+1); 
    printf("nombre: %s\n", vec[i].nombre); 
    printf("padron: %d\n", vec[i].padron);  
    printf("email: %s\n", vec[i].email); 
    printf("Nota Parcial 1:%d Nota Parcial 2:%d\n", vec[i].notas[0], vec[i].notas[1]); 
    printf("promedio: %.2f\n", vec[i].promedio); 
} 
    print_newline(); 
} 

// void mejorPromedio(alumno_t alumnos_totales[TAMANIO] ){

//     char nombre;
//     int i,alumno_numero_lista=0;
//     float mayor_prom =0;
//     for(i=0;i<TAMANIO;i++){
//         if(alumnos_totales[i].promedio > mayor_prom){
//         mayor_prom = alumnos_totales[i].promedio;
//         alumno_numero_lista=i;
//         }
//     }

//     nombre= alumnos_totales[alumno_numero_lista].nombre;

// }

void ordenar_mejorado(t_alumnos vector, int n)
{
    int i, j, aux;     
    bool continuar=true;

    // método burbujeo mejorado
    i=1;
    while (continuar && i<n) {
        continuar=false;
        for (j=0; j<n-i; j++) {
        if (vector[j] > vector[j+1]) {
            aux=vector[j]; 
            vector[j]=vector[j+1]; 
            vector[j+1]=aux;
            continuar=true;
        } 
        }
        i++;
    }
}

int busqueda_binaria(t_alumnos valores, int buscado) {
    int inf, sup, mit;
    bool terminado; 
    int posicion;
    
    // inicializaciones
    inf = 0;
    sup = TAMANIO-1;
    terminado = false;

    while (!terminado) {
        if ((buscado < valores[inf]) || (buscado > valores[sup])) {
            terminado = true; // NO ESTA => FIN DE LA BUSQUEDA
            posicion = NO_ENCONTRADO;
        } else {
            mit = inf + ((sup-inf)/2); // evitamos overflow de la suma directa

            if (valores[mit] == buscado) {
                terminado = true; // ENCONTRADO => FIN DE LA BUSQUEDA
                posicion = mit;
            } else if(buscado > valores[mit]) {
                inf = mit + 1;
            } else {
                sup = mit - 1;
            }
        }        
    }

    return posicion;
}

int main(void) 
{ 
alumno_t alumnos[TAMANIO]; 
/* Cargo los elementos de la tabla */ 
cargar(alumnos); 
/* Muestro el contenido de los elementos de la tabla */ 
mostrar_alumnos(alumnos); 
print_newline(); 
return 0; 
} 