// 3) Dado un listado de valores numéricos i y x, donde i es un entero mayor que
// 0 y menor o igual 999, y x un número real, almacenar x en la posición i de un
// vector. El listado no se ingresa ordenado por posición. Informar la cantidad de
// números y el contenido del vector indicando la posición ocupada por cada
// número a partir de la primera posición. Omitir las posiciones que no contengan
// valor.
// Considerar una estructura de datos de tamaño físico máximo de 1000
// posiciones.
#include <stdio.h>
#define MF 1000
typedef int TV_VEC[MF];

void limpiar_vector(TV_VEC *lista){
int i;

for(i=0; i<MF; i++)
    lista[i] = 0;
}

void ingreso_lista(TV_VEC lista, int *contador,int *ultima_posicion ){

    int posicion_i,x;
    contador=0,ultima_posicion=0;
    while((0<posicion_i) && (posicion_i<=MF)){
    printf("Ingrese una posicion: (entre 1 y 1000)\n");
    scanf("%d",&posicion_i);
    if(0<posicion_i && posicion_i<=1000){    
    printf("Ingrese un número para ingresar en la posición %d:\n",posicion_i);
    scanf("%d",&x);
    if((x>0 && x<=1000) && (lista[posicion_i]==0))
    {
    lista[posicion_i]=x;
    if(posicion_i>ultima_posicion)
    ultima_posicion=posicion_i;
    contador=contador+1; 
    }
    else
    printf("Ingrese nuevamente y el número debe ser entre 0 y 1000\n");
    }
}

}

int main(){
    int i,numeros,ult_posicion;
TV_VEC vector_limpio;

limpiar_vector(&vector_limpio);

ingreso_lista(vector_limpio,&numeros,&ult_posicion);


printf("Los números de la lista fueron %d\n", numeros);
for(i=0;i<=ult_posicion;i++){
    if(vector_limpio[i]!=0)
    printf("posicion: %d\n%d\n",i,vector_limpio[i]);
}

    return 0;
}

