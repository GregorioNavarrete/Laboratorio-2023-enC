// es un ejercicio que tien en cuanta el TIPO DE DATO 


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Ejercicio 4 del TP2
	/*
	Ingresar una letra mayúscula o minúscula y mostrar su posición en el alfabeto.
	*/
	char letra1;
	printf(" ingrese letra : ");
	scanf("%c",&letra1);
	
	
	printf(" usted ingreso y su valor numerico  %c = %d  \n",letra1,letra1);
	
	
	//hay que poder sistiguir ente munusculas o mayuculas del caracter
	//a = 97  ¨97 hasta   ¨
	//A =65  ¨65  hasta 90 ¨
	
	//estoy en minusculas
	if (letra1 >= 97){
		printf(" su posicion en el alfabeto es : %d  ",letra1-96);
	}
	//estoy en mayusculas
	if (letra1 >= 65 && letra1<=90){
		printf(" su posicion en el alfabeto es : %d  ",letra1-64);
	}

	return 0;
}
