// 16) Dos números se dicen amigos cuando uno de ellos es igual a la suma
// de todos los divisores del otro excepto el mismo. Ejemplo: los números 220 y 284
// son amigos.
// (284 = 1+2+4+5+10+11+20+22+44+55+110)
// (220 = 1+2+4+71+142)
// Se pide:
// a) escribir una función booleana que llamada desde un programa, permita
// discernir si dos números (parámetros) son amigos.
// b) Usar otra función para calcular la suma de los divisores de un número
// determinado.
// c) Hacer referencia a dichas funciones desde un programa o desde otro
// subprograma.
#include <stdio.h>
#include <stdbool.h>


int suma_divisores(int numero){
    int suma=0, i;

    for(i=1;i<numero;i++){
        if(( numero % i ) == 0)
            suma= i + suma;
    }

    return suma;
}
bool amigos(int numero_1, int numero_2){
    bool amigo = false;
    int n1,n2;
    n1=suma_divisores(numero_1);
    n2=suma_divisores(numero_2);
    if((n1 == numero_2)&&(n2 == numero_1))
        amigo=true;

return amigo;
}

int main(){
    int numero_1 =220, numero_2= 284;
    bool son_amigos;

    son_amigos=amigos(numero_1,numero_2);

    if(son_amigos)
        printf("son amigos");
    else
        printf("no son amigos");


}