#include <stdio.h>
#define MF 3
typedef int vrt[MF];

void validar(int *N){
	  do {  printf("positivo: ");
            scanf(" %d",  N  );
       } while (*N < 0);
	
}


void cargar_vec(vrt vector){
    int i,valor;
    for(i=0;i<MF;i++){
        printf("ingrese valor %d:\n",i);
        validar(&valor);
        vector[i]=valor;
        
    }
    
}
int productoescalar(vrt vrt1,vrt vrt2){
    
    int i, producto=0;
    for(i=0;i<MF;i++){
        producto=+(vrt1[i]*vrt2[i]);
        
        
    }
    
    return producto;
}

void main()
{
    vrt vc1,vc2;
    
  cargar_vec(vc1);
  cargar_vec(vc2);
  printf("producto escalar:%d\n",productoescalar(vc1,vc2));

   
}