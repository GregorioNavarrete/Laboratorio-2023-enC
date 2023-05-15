//Ejer6 


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Ejercicio 6 del TP2
	/*
  
	*/
	int nota;
	printf(" ingrese nota : ");
	scanf("%d",&nota);
	
	
  //Para cortar el While , hayq poner valores que no esten entre 0 y 100      
	while(nota>=0 && nota<=100){
			if(nota>=90){
		// poner A              
		printf(" Su nota es un AAA ");
	}
	else{
		if(nota>=80){
			//Poner B
			printf(" Su nota es un BBB ");
		}else{
			if(nota>=70){
				//Poner C
				printf(" Su nota es un CCC ");
			}else{
				if(nota>=60){
					//poner D
					printf(" Su nota es un DDD ");
				}else{
					//Poner F 
					printf(" Su nota es un FFF ");
				}
			}
		}
	}
		printf(" \n ingrese nota : ");
	scanf("%d",&nota);
	
	}

	return 0;
}
