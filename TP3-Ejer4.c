#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
	Ejer 4
	 Esta incompleto
	 Tien un erro para asignar los Min y Max
	
	*/
	
	int Dim;
    printf("\nIngrese el tananio del arreglo : ");
    scanf("%d", &Dim);
	
    float precio[Dim];
    int i = 0,suma=0,b=0,min=0,max=0;
    float x,y,cont=0;
                    
    while (i < Dim){
        printf("\n  Ingrese el primer numero: ");
        scanf("%f", &precio[i]);
        suma=suma+precio[i];
        cont=cont+1;
        
        if(b=1){
        	//Si encuntro un nuevo minimo o maximo 
        	if(min>precio[i]){
        		min=precio[i];
			}
			if(max<precio[i]){
				max=precio[i];
			}
		}
        if(b=0){
        	//Este es el primer valor del arreglo
        	min=precio[i];
        	max=precio[i];
        	b=1;
		}
		
        
        
        i++;
    }
    
    i=0;
    printf("\n Su ARREGLO ES : ");
    while (i < Dim){
    	printf("|   ");
        printf("%.2f", precio[i]);
        i++;
    }
    
    //Mostrar PRomedio
    printf("\n El Promedio es :");
    float prom=suma/cont;
    printf("%.2f",prom);
    
    
    //Mostro los maximos y minimos 
    printf("\n El maximo es :");
    printf("%d",max);
    printf("\n El minimo es :");
    printf("%d",min);    
    
	return 0;
}
