// // Solicitar al usuario el ingreso de una temperatura 
// //(puede tener decimales por ejemplo 24.5) y la unidad en la que se encuentra (siendo solo un carácter F ó C).
// //Luego el programa debe mostrar la temperatura ingresada, convertida en la otra unidad. 
// //La relación entre temperaturas Celsius y Fahrenheit está dada por la fórmula: 
// // C=5.0 / 9.0 * (F − 32)

// // Ejemplo:
// // Temperatura = 24.5 ; Unidad = F ; Resultado -4.17 °C
// // Temperatura = 24.5 ; Unidad = C ; Resultado 76.10 °F
// #include <stdio.h>

// int main()  {    
//     float num, celsius,fahrenheit;
//     char temp;
//     printf("Ingerse una temperatura:  y elija una unidad: C o F (Celsius o Farenheit)\n ");
//     scanf(" %f %c", &num, &temp);


//     if (temp == 'F' || temp == 'f') {
//         celsius = 5.0 / 9.0 * (num - 32);
//         printf("Ingresaste %.2f grados Fahrenheit. Equivale a %.2f grados Celsius.\n", num, celsius);
//     } else if (temp == 'C' || temp == 'c') {
//         fahrenheit = (num * 9.0 / 5.0) + 32;
//         printf("Ingresaste %.2f grados Celsius. Equivale a %.2f grados Fahrenheit.\n", num, fahrenheit);
//     } else {
//         printf("Unidad no válida. Use 'C' para Celsius o 'F' para Fahrenheit.\n");
//     }
//     return 0;
// }

// /******************************************************************************

// Escribir un programa en C que solicite al usuario el 
// ingreso de un número entero e informe el factorial del mismo.

// *******************************************************************************/
// #include <stdio.h>

// int main()
// {
//     int num, factorial=1, reps;
//     printf("Ingrese un solo número entero: ");
//     scanf("%d",&num);

//         if (num < 0) 
//         printf("No se puede calcular el factorial de un número negativo.\n");
//         else if (num==0)
//         printf("El factorial de 0 es 1");
//         else{
//         for ( reps = 1; reps <= num; reps++) {
//             factorial = factorial * reps;
//         }
//         printf("El factorial de %d es %d\n", num, factorial);
//     }

//     return 0;
// }