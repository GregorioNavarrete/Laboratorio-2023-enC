#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 24
*/

int main(int argc, char *argv[]) {
  int num,fact;
  printf("Ingrese un numero: ");
  scanf("%d", &num);


	fact=1;
  while(num>1){
	fact=fact*num;
	
	num=num-1;
	printf(" %d",fact);
  }
  
  
  //El resultado da , pero no entiendo bien la logica ??? 
  return 0;
}
