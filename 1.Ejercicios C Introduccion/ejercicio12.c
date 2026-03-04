// 12) Dados a y n números enteros, informar la potencia enésima de a por productos
// sucesivos.


#include <stdio.h>

int main(){

int a ,n,i ,potencia=1;
printf("Ingrese un número: ");
scanf("%d",&a);

printf("Ingrese una potencia: ");
scanf("%d",&n);

if(n>0){
    for (i=0; i<n; i++)
        potencia= potencia*a;

    printf("%d^%d es %d: ",a,n ,potencia);
}
else if( n == 0)
printf("%d^%d es: 1", a,n);
else
{
    for(i=0; i<(-n); i++){
        potencia= potencia*a;
    }
    
    printf("%d^%d es 1/%d: ",a,n ,potencia);

}
}