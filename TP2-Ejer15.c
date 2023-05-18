#include <stdio.h>
/*
  Ejer 15
*/

int main() {
  int numero, i;

  printf("Ingrese un número entero positivo: ");
  scanf("%d", &numero);

  printf("Tabla de multiplicar del %d:\n", numero);


  //Con solo un for , queda muy bien 
  // cualquier numero puede entra al for ! 
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }

  return 0;
}
