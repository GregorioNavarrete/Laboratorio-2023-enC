#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
	Ejer 1 
	 Con el mayor de 12 pares de números generar el vector PARES. Mostrar el vector resultante.
	
	*/
	
	int Dim;
    printf("\nIngrese el tananio del arreglo : ");
    scanf("%d", &Dim);
	
    int a[Dim];
    int i = 0,x,y;
                    
    while (i < Dim){
        printf("\n  Ingrese el primer numero: ");
        scanf("%d", &x);
        printf("\n  Ingrese el Segundo numero: ");
        scanf("%d", &y);
		if(x>y){
			a[i]=x;
		}else{
			a[i]=y;
		}        
        i++;
    }
    
    i=0;
    printf("\n Su ARREGLO ES : ");
    while (i < Dim){
    	printf("|");
        printf("%d", a[i]);
        i++;
    }
	return 0;
}
