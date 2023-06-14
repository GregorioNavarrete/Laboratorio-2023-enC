#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	/*
	Ejer 6
	
	Este ejercicios esa con dim=4 , pero puede ser ser para cualquier DIMENCION 
	*/
	
	int Dim;

	
    int digitos[4];
    int i = 0,aux=0,aux4,aux5,aux6,aux3,aux1=0,aux2,b=0;
                    
 
        printf("\n  Ingrese el numero de 4 dijitos: ");
        scanf("%d", &aux);

        
        int j=0;
        int div=1000;
        while(j<4){
        	
        	aux2=aux/div;	//1
        	
        	digitos[j]=aux2;
        	
        	aux= aux%div; //234
        	
        	div=div/10;
        	j++;
		}
		//El siclo para Permutar los valores del VECTOR
		//
		i=0;
		j=3;
		while(i<j ){
			
			aux1=digitos[j];
			digitos[j]=digitos[i];
			digitos[i]=aux1;
			
			i++;
			j--;
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
