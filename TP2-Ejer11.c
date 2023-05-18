#include <stdio.h>
#include <stdlib.h>

/*
Ejer 11
*/

int main(int argc, char *argv[]) {
  int kg, anio;
  printf("Ingrese un anio: ");
  scanf("%d", &anio);
  printf("Ingrese un KG: ");
  scanf("%d", &kg);

  // Segun el anio del modelo
  if (anio <= 2000) {

    // Segun Peso y clase
    if (1000 > kg) {
      // clase 1
      printf("Es clase 1 ,con monto mensul de $2600,00 ");
    } else {
      if (1000 <= kg && kg <= 1500) {
        // clase 2
        printf("Es clase 2 ,con monto mensul de $3500,00 ");
      } else {
        // clase 3
        printf("Es clase 3 ,con monto mensul de $4560,70 ");
      }
    }
  }

  // Segun el anio del modelo
  if (2001 <= anio && anio <= 2009) {

    // Segun Peso y clase
    if (1000 > kg) {
      // clase 4
      printf("Es clase 4 ,con monto mensul de $5300,45 ");
    } else {
      if (1000 <= kg && kg <= 1500) {
        // clase 5
        printf("Es clase 5 ,con monto mensul de $6550,50 ");
      } else {
        // clase 6
        printf("Es clase 6 ,con monto mensul de $7620,22 ");
      }
    }
  }

  // Segun el anio del modelo
  if (2010 <= anio) {

    // Segun Peso y clase
    if (1500 > kg) {
      // clase 7
      printf("Es clase 7 ,con monto mensul de $8490,50 ");
    }
    if (1500 < kg) {
      // clase 8
      printf("Es clase 8 ,con monto mensul de $9620,50 ");
    }
  }

  return 0;
}
