#include <stdio.h>
#include <stdlib.h>

/*
Ejer 21

esta perfecto 
*/

int main(int argc, char *argv[]) {
  int i;
  printf("Ingrese un numero: ");
  scanf("%d", &i);


  while(i!=0){
	if(i%2==0){
		//es par
			printf("PAR \n");

	}else{
		//es impar
			printf("IMPAR \n");

	}
	printf("Ingrese un numero: ");
  	scanf("%d", &i);
  }
  
  return 0;
}
