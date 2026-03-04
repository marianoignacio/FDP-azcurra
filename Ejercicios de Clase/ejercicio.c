#include <stdio.h>
#include <string.h>

void main(){
	char cadena1[10] = "MUNDA";
	char cadena2[] = "MUNDO";
	
	if(strcmp(cadena1, cadena2) == 0)
		printf("Las cadenas son iguales");
		else
			if (strcmp(cadena1, cadena2) > 0)
				printf("La cadena 1 es mayor");
			else
				printf("La cadena 2 es mayor");
				
	return;
}