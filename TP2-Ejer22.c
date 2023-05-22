#include <stdio.h>
#include <stdlib.h>

/*
Ejer 22


*/

int main(int argc, char *argv[]) {
  int U,D,C,M,num,rest,cont;
  printf("Ingrese un numero de 4 digitos : ");
  scanf("%d", &num);

/*
1234

Lo descompongo 
U=4  ; D=3 ;C=2 ; M=1


  U = num%10;
  D = num%100 /10;
  C = num%1000 /100;
  M = num/1000;
  
  

  Parcial , 
  	 Los 3 tipso de datos ,  entero ,flotante char 
  	 
  	 usar el tipo de letra cada tipo de letra 
  	 
  	 las mascaras  y operaciones logicas 
  	 
  	 las operaciones sin segun el tipo de dato 
  	 
  	 
  	 
  	 
  	 Condicion del parcial , una hora , 1 ejercicio con 3 items
  */
 
 
 //calculo el primer resto 
 rest = num%10;
 cont = rest;
 U = num/10;
 
 num=U;
 
  
  while(rest != 0){
  	U = num/10;
  	rest = num%10;
  	
  	printf(" %d   , %d \n",U,rest);
  	
  	num=U;
  	
  	cont = cont*10+ rest;
  }
  
  printf(" %d ",cont);
  
  //tiene un pequenio error con un cero al final 
  return 0;
}
