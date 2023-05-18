#include <stdio.h>

/*
  Ejer 18 

  tiene un porble , porque parece que el "numero actual" crece muy rapirdo 
  y en el ultimo numero el tipo de dato "int" hace un OverFlow, y representa numeros negativos ??? 
*/
int main() {
  int numero_anterior = 12;
  int i, numero_actual;

  printf("Serie de 20 números:\n");

  printf("%d \n", numero_anterior);

  //la logica recurrente 
  for (i = 1; i < 20; i++) {
    numero_actual = numero_anterior * 3 + 3;
    printf("%d \n", numero_actual);
    numero_anterior = numero_actual;
  }

  return 0;
}
