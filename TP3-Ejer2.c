#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
	Ejer 2
	2) Generar el vector DÍGITOS con un número de 4 dígitos. Mostrar el vector resultante
	*/
	
	int Dim;

	
    int digitos[4];
    int i = 0,aux=0,aux4,aux5,aux6,aux3,aux1,aux2;
                    
 
        printf("\n  Ingrese el numero de 4 dijitos: ");
        scanf("%d", &aux);
		/*
		1234%1000=234
		1234/1000=1
		
		123%10=3
		123/10=12
		
		12%10=2
		12/10=1
	
        */
        
        int j=0;
        int div=1000;
        while(j<4){
        	
        	aux2=aux/div;	//1
        	
        	digitos[j]=aux2;
        	
        	aux= aux%div; //234
        	
        	div=div/10;
        	j++;
		}
        
     
   
    
	//Mostrar los valores del Vector    
    i=0;
    printf("\n Su ARREGLO ES : ");
    while (i < 4){
    	printf("|   ");
        printf("%d", digitos[i]);
        i++;
    }
    
   


	return 0;
}
