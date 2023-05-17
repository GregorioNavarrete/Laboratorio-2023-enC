#include <stdio.h>
#include <stdlib.h>

/* Problema 22.Invertir los dígitos de un número entero positivo. Por ejemplo,
si el número ingresado es 8735, se debe mostrar el número 5378.*/

int main(int argc, char *argv[]) {
  int resto;
  int numero;
  printf("Ingrese un número: ");
  scanf("%d", &numero);
  printf("El número invertido es igual a :");
  // Con el while vamos corriendo la coma una posición a la izquierda.
  // cuando numero=0 significa que ya no quedan lugares a la izquierda.
  while (numero > 0) {
    // Con este operación tomamos el resto de dividir el numero sobre 10.
    // En cada iteración del while el resto es igual al último dígito.
    resto = numero % 10;
    // Se imprime el último dígito del número
    printf("%d", resto);
    // Con esta operación se toma la parte entera de dividir el numero sobre 10.
    // En cada repetición del while permite ir quitando un digito al numero
    // ingresado.
    numero = numero / 10;
  }
  return 0;

  
