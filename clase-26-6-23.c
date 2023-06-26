#include <stdio.h>
#include <stdlib.h>
#include <string.h> //trabaja con Vector CHAR
//#include <ctype.h>  esta libreria trabaja con CHAR

int main(int argc, char *argv[]) {
	/*
		para ver las funciones con strings
	
	*/
    char programador[16]="Pablo Rodriguez";
    
    
    
    printf("escriba nombre del programador:");
    gets(programador); // el ¨gets¨es para escribir el vector desde cero
    int aux= strlen(programador);//el ¨strlen¨ le damos el vector y nos regresa un numero entero
    /*
	programador = NUEVOprogramador
	*/
	strcpy(programador,NUEVOprogramador);//genero un nuevo string, apartir del anterior
	
	
	strcat(programador,"El Mas crack");// este me concatea el string
	
	
	
	aux =strcmp(string1,string2);// es util para comparar el tamanio y si todos los caracteres son iguales  
	//si aux ,negativo ¨string2¨ es mas grande
 	//si aux es positivo ¨string1¨ es mas grande 
	//si aux = 0 , los dos strings son iguales 
	
	
	
    printf(" sus letras son %d \n ",aux);
    
    
    
/*
	#include <string.h>
	
	esta libreria para usar funciones que trabajen con el vector char
*/

	return 0;
}



////////////////////////////////////////////////////////////////////////////////////////////////// 

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //trabaja con Vector CHAR

int main(int argc, char *argv[]) {
	/*
		vector char
	
	*/
    char apellido1[20];
    char apellido2[20];
	printf ("ingrese el primer apellido : ");
	gets(apellido1);
	printf ("ingrese el segundo apellido : ");
	gets(apellido2);
	
	//
	printf("el apellido uno tiene %d caracteres \n ",strlen(apellido1));
	printf("el apellido dos tiene %d caracteres \n ",strlen(apellido2));	
	
	
	//pra probar como comparar strings 
	if(strcmp(apellido1,apellido2)==0){
		printf("los apellidos son iguales \n ");
	}else{
		/*
		los minuscula tiene mas valor numerico en esl squii
		
		strcmp(string1,string2);  
		si aux ,negativo ¨string2¨ es mas grande
 		si aux es positivo ¨string1¨ es mas grande 
		
		
		*/
		if(strcmp(apellido1,apellido2)>0){
			printf("los el apellido mas grande es : %s \n ",apellido1);
		}else{
			printf("los el apellido mas grande es : %s \n ",apellido2);
		}
	}
	
	return 0;
}
