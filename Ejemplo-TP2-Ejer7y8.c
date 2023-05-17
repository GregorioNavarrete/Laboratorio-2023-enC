#include <stdio.h>
#include <stdlib.h>

/*Problema 7. Dados dos números reales y un carácter que contiene la operación
que desea realizar el usuario con esos dos números (“+”, “-”, “*” o bien “/”),
muestre tanto la operación como su resultado. Ejemplo: si se
introducen14.25, 22.50 y el carácter “+”, el programa deberá sumar los valores y
mostrar “14.25+22.50=36.75”. Problema 7. Modificar el programa anterior para que
contemple la división entre 0 (cero). Mostrar un mensaje de notificación cuando
se intente dividir entre 0.*/

// Nota: El siguiente programa resuelve los problemas 7 y 8.

int main(int argc, char *argv[]) {
  // La variable opc sirve para leer la operación seleccionada por el usuario
  char opc = '1';
  // Las variables numero1 y numero2 se usan para leer los dos números reales
  // ingresados por el usuario
  float numero1, numero2;
  // El programa se ejecuta hasta que el usuario ingrese la letra s para salir
  while (opc != 's') {
    // Pédimos el ingreso de los dos números reales y los leemos en las
    // variables numero1 y número2
    printf("Ingrese un  numero real: ");
    scanf("%f", &numero1);
    printf("\n");
    printf("Ingrese un  numero real: ");
    scanf("%f", &numero2);
    printf("\n");
    // Se muestra por pantalla el menú de opciones con las operaciones
    // disponibles
    printf("Seleccione algunas siguientes opciones \n");
    printf("+ para suma\n");
    printf("- para resta\n");
    printf("* para multiplicacion\n");
    printf("/ para division \n");
    printf("S para Salir \n");
    // Usamos dos scanf porque caso contrario el enter se lee como un caracter y
    // el programa no lee la opción seleccionada por el usuario
    scanf("%c", &opc);
    scanf("%c", &opc);
    // Usamos el switch para determinar la operación a realizar de acuerdo al
    // valor
    // leido en la variable opc
    switch (opc) {
    case '+':
      printf("%.2f + %.2f = %.2f \n", numero1, numero2, numero1 + numero2);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f \n", numero1, numero2, numero1 - numero2);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f \n", numero1, numero2, numero1 * numero2);
      break;
    case '/':
      // Si el valor ingresado en numero2 es distinto cero, se realiza la
      // división. si el valor de numero2 es cero, se muestra el mensaje de
      // error.
      if (numero2 != 0) {
        printf("%.2f / %.2f = %.2f \n", numero1, numero2, numero1 / numero2);
      } else {
        printf("ERROR: no se puede divir por cero \n");
        printf("\a");
      }
      break;
    case 's':
      printf("Selecciono Salir del programa ");
      break;
    // Cualquier opción no mostrada en el menú se considera como una opción no
    // valida.
    default:
      printf("Opcion no valida \n");
      break;
    }
  }
  return 0;
}
