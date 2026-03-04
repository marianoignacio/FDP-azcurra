// Escribir una programa que implemente una función ya sea del método de ordenamiento del burbujeo ó del burbujeo optimizado.
// Invocar dicha función pasando un arreglo formado por los dígitos de tu DNI, y el respectivo ML.

#include <stdio.h>
#define MF 8

typedef int T_vec[MF]; 

void ordenar_por_burbujeo_optimizado(T_vec dni, int ml, T_vec *dni_nuevo){

    int pasos =1,comprobaciones,aux;
    bool hubo_cambio=true;

    while((pasos < ml) && hubo_cambio){

        hubo_cambio = false;
        for(comprobaciones=0, comprobaciones<ml-pasos;comprobaciones++)
            if(dni[comprobaciones] > dni[comprobaciones+1]){
                aux = dni[comprobaciones];
                dni[comprobaciones+1] = aux;
                hubo_cambio=true;
            }
    }
}

int main(){

    int digitos_dni=8;
    T_vec dni_mariano[]={4,6,9,1,3,0,9,2};
    ordenar_por_burbujeo_optimizado(dni_mariano,digitos_dni);

}


// Escribir un programa modular que implemente la función del burbujeo optimizado para ordenar un arreglo compuesto por los dígitos de tu DNI. Suponé com máximo físico 10 dígitos enteros.
// Invocar la función desde el main.
// Mostrá los valores antes y después del ordenamiento.

// Para la construcción del programa, podés utilizar el editor del intérprete o el ide que prefieras.
// Luego copia y pega lo que hayas hecho en la caja de texto de esta actividad y efectuá la entrega de la misma