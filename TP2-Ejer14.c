#include <stdio.h>
/*
  Ejer 14
  Ademas en clase le agregamos el salto de linea entre los multiplos de 10
*/
int main() {
  int numero;

  printf("Números pares del 0 al 50:\n");

  for (numero = 0; numero <= 50; numero += 2) {
    printf("%d ", numero);

    if (numero % 10 == 0 && numero != 0) {
      printf("\n");
    }
  }

  printf("\n");

  return 0;
}
