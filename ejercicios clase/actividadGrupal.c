// Un banco posee un archivo denominado cuentas.dat, 
// cuyos registros contienen el identificador de cliente (entero) 
// –es único, no se repite en el archivo-, su saldo actual (real) y límite de descubierto 
// (real). El archivo se encuentra ordenado ascendentemente por identificador 
// de cliente y NO “ENTRA” EN MEMORIA.
// Se pide desarrollar un programa en lenguaje C que procese este archivo al final de cada día y 
// que permita:

// 1- Generar una tabla llamada en_descubierto que contenga toda la 
// información de aquellas cuentas en las cuales el saldo actual es negativo. 
// Procesar el archivo de forma tal 
// que dicha tabla quede ordenada ascendentemente por identificador de cliente.
//  Asumir que la misma tendrá como máximo 250 registros, razón por la cual “ENTRA”
//  EN MEMORIA.
#include <stdio.h>
#include <string.h>
#define MAX 250

typedef struct{
    int ID;
    char nombre;
    int saldo;
}en_descubierto;

typedef en_descubierto TTabla[MAX];

void ordenar(FILE *arch, TTabla tabla_nueva, int *ML){

    en_descubierto Reg;
    arch = fopen("cuentas.dat","r");
    fread(&Reg, sizeof(Reg),1,arch);
    while(!feof(arch) && ML < MAX ){

        if(arch.saldo < 0)
            tabla[*ML];
        else
            *ML++;
    }

    fclose(arch);
}

int main(){
FILE *archivo;
TTabla tabla;
int ml = 0;

    ordenar(archivo, tabla, &ml);

}

// 2- Solicitar el ingreso de un identificador de cliente y buscar de modo eficiente
//  en la tabla en_descubierto el identificador ingresado. De encontrar el 
// registro correspondiente a dicho identificador, mostrar por 
// pantalla todos los campos del mismo. En caso de no encontrarlo,
//  mostrar por pantalla el mensaje “CLIENTE NO ENCONTRADO EN LA TABLA EN_DESCUBIERTO”.

// 3- Generar un archivo contactar.dat con todos los datos de aquellas 
// cuentas en las que la diferencia entre el saldo actual y el límite 
// de descubierto sea menor al 15%. Agregar este dato (el porcentaje calculado) 
// en los registros que se guardan en el archivo.