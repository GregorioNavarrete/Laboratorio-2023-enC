#include <stdio.h>

/*
  Ejercicio 13
*/
int main() {
  float num1, num2, resultado;
  char operacion;

  printf("Ingrese el primer número: ");
  scanf("%f", &num1);

  printf("Ingrese el segundo número: ");
  scanf("%f", &num2);

  printf("Ingrese la operación a realizar (+, -, *, /): ");
  scanf(" %c", &operacion);

  switch (operacion) {
    case '+':
      resultado = num1 + num2;
      printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
      break;
  
    case '-':
      resultado = num1 - num2;
      printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
      break;
  
    case '*':
      resultado = num1 * num2;
      printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
      break;
  
    case '/':
      if (num2 != 0) {
        resultado = num1 / num2;
        printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
      } else {
        //caso especial ! 
        printf("Error: no se puede dividir entre cero.\n");
      }
      break;
  
    default:
      printf("Error: operación no válida.\n");
      break;
    
  }

  return 0;
}
