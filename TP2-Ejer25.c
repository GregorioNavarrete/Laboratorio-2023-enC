#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 25
*/

int main(int argc, char *argv[]) {
  int num1,num2,i,cont;
  printf("Ingrese un numero 1 : ");
  scanf("%d", &num1);
  printf("Ingrese un numero 2 : ");
  scanf("%d", &num2);
	/*
	
	4*5
	5+5+5+5
	*/
	
	cont=0;
	  for (i = 1; i <= num1; i++) {
		cont=cont+5;
		printf("la suma suseciva es %d  \n",cont);
	  }
  
  return 0;
}
