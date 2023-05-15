#include <stdio.h>
#include <stdlib.h>

int main() {
	/*
	Ejer9
	*/
    int year;

    printf("Ingrese un ano: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d es un ano bisiesto.\n", year);
    } else {
        printf("%d no es un ano bisiesto.\n", year);
    }

    return 0;
}
