#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
	Ejer 8
	
	*/
	
	
	//Declaro los 3 vectores 
    int cantidad[6];
    float precio[6];
    float total[6];
    
    //cargar los vectores 
    int i = 0,aux4,aux5,aux6,aux3,aux1,aux2,b=0;
                    
 	while(i<6){
	    printf("\n  Ingrese la cantidad de elementos : ");
	    scanf("%d", &cantidad[i]);
	    printf("\n  Ingrese el precio : ");
	    scanf("%f", &precio[i]);   
		
		i++;     
	}
	
	//Mostrar los vectore en la tabla 
	i=0;
	printf("\n  Cantidad\t\t Precio\t\tPrecioTotal \n");
	while(i<6){
		
		float aux=cantidad[i]*precio[i];
		total[i]=aux;
		printf("\t%d\t\t%2.f\t\t%2.f  \n",cantidad[i],precio[i],aux);
		
		i++;
	}
	//Sumar todo el Vector Total
	i=0;
	float suma=0;
	while(i<6){
		suma =suma+total[i];
		
		i++;
	}
	printf("\t\t\t\t\t Total : %2.f",suma);
        
	return 0;
}
