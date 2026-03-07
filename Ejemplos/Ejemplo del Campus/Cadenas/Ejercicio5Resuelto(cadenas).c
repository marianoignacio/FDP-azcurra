/*
Escribir una función para validar una nueva clave de acceso.
La función deberá recibir una cadena de caracteres, que contendrá la clave
candidata, que ya fue ingresada previamente por el usuario.
Devolverá true o false, dependiendo de si cumple o no, con las siguientes
condiciones:

- La clave debe estar formada únicamente por, entre 6 y 12 caracteres numéricos
- La cantidad de dígitos pares debe ser mayor a la de los impares.

A los sumo debe recorrer una vez la cadena. Evite realizar ciclos innecesarios.

Compruebe el correcto funcionamiento, incluyendo los siguientes casos de prueba:
validar("j20893") devuelve false
validar("20893a") devuelve false
validar("208X930") devuelve false
validar("20201") devuelve false
validar("23445776") devuelve false
validar("089010") devuelve true
validar("02784532132567") devuelve false
validar("027845320011") devuelve true 

*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MF 20
#define MIN 6
#define MAX 12
#define DIGITOS_PARES "02468"
#define DIGITOS_IMPARES "13579"

typedef char t_clave[MF];

void obtener_cadena(char cadena[], int largo)
{
  fgets(cadena, largo, stdin);
  cadena[strcspn(cadena, "\n")] = '\0';
}

bool es_largo_valido(t_clave clave)
{
	return (strlen(clave) >= MIN) && (strlen(clave) <= MAX);
}

bool es_digito_par(char caracter)
{
	char strchar[] = {caracter, '\0'};
	return strstr(DIGITOS_PARES, strchar) != NULL;
}

bool es_digito_impar(char caracter)
{
	char strchar[] = {caracter, '\0'};
	return strstr(DIGITOS_IMPARES, strchar) != NULL;
}

bool es_clave_valida(t_clave clave)
{
	bool es_valida;
	int pos = 0, pares = 0, impares = 0;
		
	es_valida = es_largo_valido(clave);

	while ((clave[pos] != '\0') && (es_valida)) {	
			
		if (es_digito_par(clave[pos]))
			pares++;
		else if (es_digito_impar(clave[pos]))
			impares++;
		else
			/* No es caracter numérico */
			es_valida = false;

		pos++;
	}
	
	return es_valida && (pares > impares);
}

void evaluar_clave(t_clave clave)
{
	if (es_clave_valida(clave)) 
		printf("Clave Valida: %s\n", clave);
	else 
		printf("Clave Invalida: %s\n", clave);
}

/* Función que puede ser invocada desde el main para ejecutar multiples casos de prueba*/
void pruebas()
{
	// Casos de prueba para la funcion	
	t_clave claves[8] = {"j20893", "20893a", "208X930", "20201", "23445776", "089010", "02784532132567", "027845320011"};
	int i;
	
	for (i = 0; i<8; i++)
		evaluar_clave(claves[i]);
}

int main()
{
	t_clave clave;

	printf("Ingrese clave: ");
	obtener_cadena(clave, MF);
	evaluar_clave(clave);
	
	return 0;
}