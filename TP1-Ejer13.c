#include <stdio.h>

/*
  Ejer 13
  El primer cuadro con datos , de forma grafica
*/
int main() {
  char User1 = 'A';
  char User2 = 'M';
  char User3 = 'J';

  int Edad1 = 25;
  int Edad2 = 17;
  int Edad3 = 5;

  float Sueldo1 = 7500.84;
  float Sueldo2 = 18700.95;
  float Sueldo3 = 0.00;

  printf("Nombre y Apellido \t\t Edad \t\t Sueldo \n");
  printf("------------------\t\t ------\t\t -------- \n");
  printf("%c \t\t\t\t\t %d \t\t %.2f  \n", User1, Edad1, Sueldo1);
  printf("%c \t\t\t\t\t %d \t\t %.2f  \n", User2, Edad2, Sueldo2);
  printf("%c \t\t\t\t\t %d \t\t %.2f  \n", User3, Edad2, Sueldo3);

  return 0;
}
