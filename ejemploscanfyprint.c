
/*
	Durante el curso nuestros programas requerirán que se le soliciten datos al 
	usuario como así también mostrarle resultados al usuario.

	En C tenemos que familiarizarnos con los terminos:

	stdin (standard input): entrada estandar la cual de forma predeterminada lee desde el teclado
	stdout (standard outpud): salida estandar la cual de forma predeterminada se muestra por pantalla

	Para leer datos desde stdin utilizaremos la funcion:
	int scanf(const char *format, ...);
	Para usarla le pasaremos como primer argumento la cadena con el formato del dato a ser leido, y como segundo argumento
	la dirección de la variables destino donde debe ser cargado el dato.

	Para mostrar datos por stdout utilizaremos la funcion:
	int printf(const char *format, ...);
	Para usarla le pasaremos como primer argumento la cadena con los formateadores correspondientes, y luego los argumentos
	de los datos pasados por valor.

	Muchas veces entre solicitudes de datos sucesivas dentremos que limpiar el resto de información no lieda
	en el stdin, esto lo podemos hacer con la funcion getchar() para remover de a un caracter, y nos podemos 
	ayudar con alguna función auxiliar que definamos nosotros.
*/

#include <stdio.h>

/*
 * funcion que nos permite eliminar el contenido remanente almacenado  
 * en en el buffer stdin luego de haber leido un dato
 */
void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main()
{
	int int_var;
	long long_var;
	char char_var;

	printf("\nEjemplos de uso de scanf y printf\n\n");
	
	/* leemos y mostramos un numero de tipo int ingresado por el usuario */
	printf("Ingrese un numero entero: ");
	scanf("%d", &int_var); /* usamos %d como formato para leer un dato de tipo int */
	clean_stdin(); /* limpiamos buffer stdin */
	printf("Numero ingresado: %d \n\n", int_var);

	printf("Ingrese un numero entero grande: ");
	scanf("%ld", &long_var); /* usamos %ld como formato para leer un dato de tipo long */
	clean_stdin(); /* limpiamos buffer stdin */
	printf("Numero ingresado: %ld \n\n", long_var);
	
	printf("Ingrese un caracter: ");
	scanf("%c", &char_var); /* usamos %c como formato para leer un dato de tipo char */
	clean_stdin(); /* limpiamos buffer stdin */
	printf("Caracter ingresado: %c \n\n", char_var);

	return 0;
}