#include <stdio.h>
/*
  Ejer 15 y 16
*/
#include <stdio.h>

int main() {
    int numero, i;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);
    
  
    //este If es el filtro 
    if (numero > 0) {
        printf("Tabla de multiplicar del %d:\n", numero);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
    } else {
        printf("El número ingresado no es un entero positivo.\n");
    }

    return 0;
}

