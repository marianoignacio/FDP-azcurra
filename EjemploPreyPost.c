#include <stdio.h>

int main()
{
	int n = 1;

	printf("\nEjemplos de uso de los incrementos\n\n");
	printf("n -> %d \n", n);

	n = n + 1;
	printf("luego de la operación: n = n + 1 -> %d \n", n); 
	printf("usando pre incremento ++n -> %d \n", ++n); /* se realiza incremento sobre n y luego se usa el valor actualizado */
	printf("n -> %d \n", n);

	printf("usando post incremento n++ -> %d \n", n++); /* se utiliza el valor de n y luego se actualiza su valor */
	printf("n -> %d \n", n);

	printf("\nEjemplos de uso de los decrementos\n\n");
	printf("n -> %d \n", n);

	n = n - 1;
	printf("luego de la operación: n = n - 1 -> %d \n", n); 
	printf("usando pre decremento --n -> %d \n", --n); /* se realiza decremento sobre n y luego se usa el valor actualizado */
	printf("n -> %d \n", n);

	printf("usando post decremento n-- -> %d \n", n--); /* se utiliza el valor de n y luego se actualiza su valor */
	printf("n -> %d \n\n", n);

	/* operaciones equivalentes */
	printf("Ejemplo de operaciones equivalentes \n");
	n = 100;
	printf("n = %d \n", n);

	/* suma */
	n = n + 5;
	n += 5;
	printf("n +5 +5 = %d \n", n);
	
	/* resta */
	n = n - 5;
	n -= 5;
	printf("n -5 -5 = %d \n", n);
	
	/* multiplicacion */
	n = n * 5;
	n *= 5;
	printf("n *5 *5 = %d \n", n);
	
	/* división */
	n = n / 5;
	n /= 5;
	printf("n /5 /5 = %d \n", n);

	return 0;
}

	/*
	Salida del programa:

	Ejemplos de uso de los incrementos

	n -> 1 
	luego de la operación: n = n + 1 -> 2 
	usando pre incremento ++n -> 3 
	n -> 3 
	usando post incremento n++ -> 3 
	n -> 4 

	Ejemplos de uso de los decrementos

	n -> 4 
	luego de la operación: n = n - 1 -> 3 
	usando pre decremento --n -> 2 
	n -> 2 
	usando post decremento n-- -> 2 
	n -> 1 

	Ejemplo de operaciones equivalentes 
	n = 100 
	n +5 +5 = 110 
	n -5 -5 = 100 
	n *5 *5 = 2500 
	n /5 /5 = 100 
	*/