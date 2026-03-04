// 18) Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en
// el mercado. A cada encuestado se le pregunta si consume el producto x y si consume el
// producto y. La respuesta puede ser sí o no.
// Se pide calcular e informar el porcentaje de consumidores de:
// a) del producto x
// b) del producto y
// c) del producto x solamente
// d) del producto y solamente
// e) de ambos productos
// f) de ninguno de los productos

#include <stdio.h>
#include <stdbool.h>

int main(){
    int i,encuestados = 2 ;
    char consumo_x,consumo_y;
    float consumo = 0, porcentaje = 0, x = 0, ninguno = 0, ambos = 0, solo_x = 0, solo_y = 0, y = 0;
    bool condicion1, condicion2;
    //!Lo cambié, siempre si tengo un contador inicializarlo en 0

for (i=0; i<encuestados;i++){
    condicion1=false;
    condicion2=false;
    printf("El escuestado es el número %d\n",i+1);//no lo pide, tranquqilamente puedo sacar el for, pero para que sea más prolijo lo puse
    // el ejercicio va sin el for
    while (condicion1 == false)
    {
    printf("Indique: ¿consume el producto x? (si=s, no=n) \n");
    scanf(" %c",&consumo_x);
    if (consumo_x == 's')
        {x=x+1;
        condicion1= true;}
    else if (consumo_x == 'n')
        condicion1= true;
    else
        printf('Indique "si" con s y "no" con n\n Vuelva a ingresar\n');
    }
    
    while (condicion2 == false)
    {
    printf("Indique: ¿consume el producto y? (si=s, no=n) \n");
    scanf(" %c",&consumo_y);
    if (consumo_y == 's')
        {y=y+1;
        condicion2= true;}
    else if  (consumo_y == 'n')
        condicion2=true;
    else
        printf("Indique si con s y no con n\nVuelva a ingresar\n");
    }
    
    
    if(consumo_x =='s' && consumo_y =='s'){
        ambos=ambos+1;
    }
    else if(consumo_x =='s' && consumo_y =='n')
    {
        solo_x=solo_x+1;
    }
    else if(consumo_x =='n' && consumo_y =='s')
    {
        solo_y=solo_y+1;        
    }
    else if(consumo_x =='n' && consumo_y =='n')
    {
        ninguno=ninguno+1;
    }

    consumo=consumo+1;

}    

porcentaje=100/consumo;
printf("El promedio de consumidores de x es: %.0f %%\n", porcentaje*x);
printf("El promedio de consumidores de y es: %.0f %%\n", porcentaje*y);
printf("El promedio de consumidores de solo x es: %.0f %%\n",porcentaje*solo_x );
printf("El promedio de consumidores de solo y es: %.0f %%\n", porcentaje*solo_y);
printf("El promedio de consumidores de ambos es: %.0f %%\n",porcentaje*ambos );
printf("El promedio de consumidores de ninguno es: %.0f %%\n", porcentaje*ninguno);

}