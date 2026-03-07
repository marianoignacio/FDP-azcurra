/* 
	Escribir un programa modular en C, que solicite el ingreso de no más de 10 palabras.
	Cada palabra no tendrá más de 20 caracteres. 
	Al finalizar la carga, mostrar las palabras ingresadas.
  Luego mostrar las palabras de forma ordenada alfabeticamente.
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LARGO_CADENA 21
#define CANTIDAD_CADENAS 10
#define NO_ENCONTRADO -1

typedef char t_palabra[LARGO_CADENA];
typedef t_palabra t_cadenas[CANTIDAD_CADENAS];

void obtener_cadena(char cadena[], int largo)
{
  fgets(cadena, largo, stdin);
  cadena[strcspn(cadena, "\n")] = '\0';
}

void solicitar_palabra(t_palabra palabra, int largo)
{
  printf("Ingrese palabra: ");
  obtener_cadena(palabra, largo);
}

int cargar_palabras(t_cadenas palabras)
{
  int i = 0;
  t_palabra palabra;

  solicitar_palabra(palabra, LARGO_CADENA-1);
  while (i < CANTIDAD_CADENAS && strlen(palabra) > 0) {
    strcpy(palabras[i], palabra);
    i++;

    if (i < CANTIDAD_CADENAS) {
      solicitar_palabra(palabra, LARGO_CADENA-1);
    }
  }
  return i;
}

void mostrar_palabras(t_cadenas palabras, int ml)
{
  int i;
  printf("Palabras ingresadas: \n");
  for (i=0; i<ml; i++) {
    printf("%s\n", palabras[i]);
  }
  printf("\n");
}

void ordenar(t_cadenas vector, int n)
{
  int i, j;
  t_palabra aux;     
  bool continuar = true;

  // método burbujeo mejorado
  i=1;
  while (continuar && i < n) {
    continuar = false;

    for (j=0; j<n-i; j++) {
      if (strcmp(vector[j], vector[j+1]) > 0) {
         
        strcpy(aux, vector[j]); 
        strcpy(vector[j], vector[j+1]); 
        strcpy(vector[j+1], aux);

        continuar=true;
       } 
    }
    i++;
  }
}

int busqueda_binaria(t_cadenas valores, int tamanio, t_palabra buscado) {
  int inf, sup, mit;
  bool terminado; 
  int posicion;
  
  // inicializaciones
  inf = 0;
  sup = tamanio-1;
  terminado = false;

  while (!terminado) {
      if ((strcmp(buscado, valores[inf]) < 0) || (strcmp(buscado, valores[sup]) > 0)) {
          terminado = true; // NO ESTA => FIN DE LA BUSQUEDA
          posicion = NO_ENCONTRADO;
      } else {
          mit = inf + ((sup-inf)/2); // evitamos overflow de la suma directa

          if (strcmp(valores[mit], buscado) == 0) {
            terminado = true; // ENCONTRADO => FIN DE LA BUSQUEDA
            posicion = mit;
          } else if (strcmp(buscado, valores[mit]) > 0) {
            inf = mit + 1;
          } else {
            sup = mit - 1;
          }
      }        
  }

  return posicion;
}

void main()
{
	t_cadenas palabras;
  t_palabra palabra_buscada;
  int ml, resultado_busqueda;

	ml = cargar_palabras(palabras);
	mostrar_palabras(palabras, ml);
  ordenar(palabras, ml);
  mostrar_palabras(palabras, ml);

  solicitar_palabra(palabra_buscada, LARGO_CADENA-1);
  resultado_busqueda = busqueda_binaria(palabras, ml, palabra_buscada);
  if (resultado_busqueda != NO_ENCONTRADO)
    printf("La palabra buscada existe dentro de la lista de palabras ingresadas.\n");
  else
    printf("La palabra buscada NO existe dentro de la lista de palabras ingresadas.\n");
}
