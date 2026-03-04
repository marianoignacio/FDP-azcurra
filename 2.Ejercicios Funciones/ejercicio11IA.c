#include <stdio.h>


// Cuenta la cantidad de dígitos de un número
int contar_digitos(int numero)
{
    int cantidad;
    
    cantidad = 0;
    
    if (numero == 0)
        cantidad = 1;
    else
    {
        while (numero != 0)
        {
            cantidad++;
            numero = numero / 10;
        }
    }
    
    return cantidad;
}

// Extrae sub-código SIN usar función potencia
int extraer_subcodigo(int codigo, int n, int k)
{
    int m, subcodigo;
    int i, divisor, modulo;
    
    subcodigo = -1;
    m = contar_digitos(codigo);
    
    // Validaciones
    if (n > 0 && n < m && k >= 0 && (n + k) <= m)
    {
        // Descartar k dígitos de la derecha
        // En vez de potencia(10, k), calculo 10^k con un FOR
        divisor = 1;
        for (i = 0; i < k; i++)
        {
            divisor = divisor * 10;
        }
        codigo = codigo / divisor;
        
        // Tomar n dígitos de la derecha
        // En vez de potencia(10, n), calculo 10^n con un FOR
        modulo = 1;
        for (i = 0; i < n; i++)
        {
            modulo = modulo * 10;
        }
        subcodigo = codigo % modulo;
    }
    
    return subcodigo;
}

int main()
{
    int resultado;
    
    printf("=== PRUEBAS ===\n\n");
    
    // Ejemplo a: código=48573628, n=4, k=3 → 8573
    resultado = extraer_subcodigo(48573628, 4, 3);
    printf("Ejemplo a: 48573628, 4, 3 -> %d (esperado: 8573)\n", resultado);
    
    // Ejemplo b: código=1234, n=3, k=0 → 234
    resultado = extraer_subcodigo(1234, 3, 0);
    printf("Ejemplo b: 1234, 3, 0 ->%d (esperado: 234)\n", resultado);
    
    // Ejemplo c: código=1234, n=3, k=1 → 123
    resultado = extraer_subcodigo(1234, 3, 1);
    printf("Ejemplo c:1234, 3, 1 ->%d (esperado: 123)\n", resultado);
    
    // Ejemplo d: código=2002, n=3, k=0 → 2 (ignora ceros a izquierda)
    resultado = extraer_subcodigo(2002, 3, 0);
    printf("Ejemplo d: %d (esperado: 2)\n", resultado);
    
    // Ejemplo e: código=2002, n=0, k=0 → -1 (n debe ser > 0)
    resultado = extraer_subcodigo(2002, 0, 0);
    printf("Ejemplo e: %d (esperado: -1)\n", resultado);
    
    // Ejemplo f: código=2002, n=5, k=3 → -1 (n+k > m)
    resultado = extraer_subcodigo(2002, 5, 3);
    printf("Ejemplo f: %d (esperado: -1)\n", resultado);
    
    return 0;
}




