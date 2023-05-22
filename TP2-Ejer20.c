#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {


/*
	Ejer 20
	
	NO se porque no funciona el codigo 
*/
    
    int contador = 0;
    int i;
    for (i = 0; i < 20; i++) {
    	char letras;
    	
	    printf("Ingrese hasta letras: ");
    	scanf("%c", letras);
    	
    	
    	//Lo curioso es Como se impleneta la funcion OR en los CASE del SWITCH !! 
        switch (letras) {
            case 'a':
            case 'A':
                contador++;
                break;
            case 'e':
            case 'E':
                contador++;
                break;
            case 'i':
            case 'I':
                contador++;
                break;
            case 'o':
            case 'O':
                contador++;
                break;
            case 'u':
            case 'U':
                contador++;
                break;
        }
    }
	    printf("se in cresaron %d vocales ",contador);

  

    return 0;
}
