#include <stdio.h>
#include <stdlib.h>

/*
Ejer 10
*/

int main(int argc, char *argv[]) {
  int angulo;
  printf("Ingrese un angulo: ");
  scanf("%d", &angulo);

  // Caso especial si esta sobre los ejes
  // 0,90,180,270
  // este programa solo funciona con valores de angulos , entre 0 hasta 360 no
  // mas !
  if (angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270) {
    printf("el angulo ingresado esta sobre los ejes de referencia ");
  } else {
    if (angulo > 270 && angulo <= 360) {
      // Esta en el cuadrante 4
      printf("Esta en el cuadrante 4 ");
    } else {
      if (180 < angulo && angulo < 270) {
        // esta en el cuadrante 3
        printf("Esta en el cuadrante 3 ");
      } else {
        if (90 < angulo && angulo < 180) {
          // esta en el cuadrante 2
          printf("Esta en el cuadrante 2 ");
        } else {
          // esta en el cuadrante 1
          printf("Esta en el cuadrante 1 ");
        }
      }
    }
  }

  return 0;
}
