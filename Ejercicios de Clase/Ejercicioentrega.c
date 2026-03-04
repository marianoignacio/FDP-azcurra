//Escribir un programa en C, que:
//- declare una cadena para almacenar como máximo 40 caracteres y como valor inicial le asigne tu nombre y apellido
//    - recorra la cadena e imprima sólo las consonantes, una debajo de la otra
//    - indique cuantas consonantes hay en tu nombre y apellido
//
//    Para la construcción del programa, podés utilizar el editor del intérprete o el IDE que prefieras.
//    Luego copia y pega lo que hayas hecho en la caja de texto de esta actividad y efectuá la entrega de la misma.

#include <stdio.h>
#include <string.h>

//Cadena para asignar como máximo 40 carácteres
char cadena[40] = "MARIANO PINTO";

//void comparar_vocales(){
//	char comparacion;
//	char consonantes[] = {'A','E','I','O','U','\0'};
//	comparacion= strstr(cadena, consonantes);
//	
//	printf("Las vocales que están en mi nombre son: %s \n",comparacion);
//
//
//	
//}
void leer_cadena(cadena){

//	char cadena[40] = "MARIANO PINTO";
	
	int i, longi;
	
	longi=strlen(cadena);
	
	for(i=0 ; i<longi ; i++)
		printf("Caracter en posición %2i: %c \n",i, cadena[i]);
	
	printf("La cadena %s tiene %i: ", cadena,longi);
	
	return;


}

void main(){
	
	leer_cadena(cadena);
	
return;

}