
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Problema: Ingresar una letra mayúscula o minúscula y mostrar su posición en
// el alfabeto.

// Nota 1: Los caracteres \xA4 y \xA5 representan las letras ñ y Ñ en código
// hexadecimal. Recordar que el idioma ingles no tiene las letras ñ y Ñ.

// Nota 2:la libreria stdbool.h permite trabajar con datos del tipo booleano

int main(int argc, char *argv[]) {
  // la variable letra se usa para leer la letra ingresada por el usuario
  char letra;
  // Definimos el arreglo LetrasMin (vector porque tiene una dimnesión) para
  // almacenar las letras minusculas. un arreglo se define tipodeDato
  // nombreArreglo [tamaño].
  char LetrasMin[27] = {'a', 'b', 'c', 'd', 'e', 'f',    'g', 'h', 'i',
                        'j', 'k', 'l', 'm', 'n', '\xA4', 'o', 'p', 'q',
                        'r', 's', 't', 'u', 'v', 'w',    'x', 'y', 'z'};
  // Definimos el arreglo LetrasMay para almacenar las letras mayusculas.
  char LetrasMay[27] = {'A', 'B', 'C', 'D', 'E', 'F',    'G', 'H', 'I',
                        'J', 'K', 'L', 'M', 'N', '\xA5', 'O', 'P', 'Q',
                        'R', 'S', 'T', 'U', 'V', 'W',    'X', 'Y', 'Z'};
  // Definimos la variable indice para recorrer los vectores LetrasMin y
  // LetrasMay
  short int indice = 0;
  // Definimos la bandera b que toma el valor true cuando encuentra la letra
  // ingresada
  bool b = false;
  printf("Ingrese una letra: ");
  // Leemos la letra ingresada en la variable letra, no olvidar de usar & con
  // scanf
  scanf("%c", &letra);
  // Se ejecuta el ciclo mientras el indice no llegue al final del arreglo y la
  // bandera sea falsa. si indice llega a 27 significa que la letra no está en
  // el abecedario. Si b cambia a true significa que se encontró la letra y no
  // tiene sentido seguir buscando.
  while (indice < 27 && b == false) {
    // Verificamos si la letra está en el arreglo de letras minusculas o en el
    // arreglo de letras mayusculas. Las dos barritas verticales || son el
    // operador lógico OR
    if (LetrasMin[indice] == letra || LetrasMay[indice] == letra) {
      printf("la letra %c ocupa la posici\xA2n  %d en el alfabeto \n", letra,
             indice + 1);
      // La bandera cambia a true cuando se encuentra en LetrasMin o en
      // LetrasMay la letra que ingresó el usuario
      b = true;
    }
    // Incrementamos en 1 el indice
    indice = indice + 1;
  }

  return 0;
}
