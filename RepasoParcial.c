#include <stdio.h>
#include <stdlib.h>
#include <string.h> //trabaja con Vector CHAR
//#include <ctype.h>  esta libreria trabaja con las funciones del vector CHAR

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
        	// > modifica el orden con el que se ordenara 
            if (arr[j] > arr[j + 1]) {
                // Intercambiar los elementos arr[j] y arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);//me da el tanio del arreglo 
    
    printf("Arreglo original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    bubbleSort(arr, n);
    
    printf("\nArreglo ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    /*
	gets(programador); // el ¨gets¨es para escribir el vector desde cero
	strlen(programador);//me da la logitud del vector
	strcpy(programador,"Grego"); // el strig "Grego" remplaza lo que esta en "programador"
	strcat(programador,"El Mas crack");// este me concatea el string ,por como esta ordenado 
	
	
	aux =strcmp(string1,string2);// es util para comparar el tamanio y si todos los caracteres son iguales  
	//si aux ,negativo ¨string2¨ es mas grande
 	//si aux es positivo ¨string1¨ es mas grande 
	//si aux = 0 , los dos strings son iguales 
	 
	
	*/
    ///////////////////////////////////////////////
    printf("\n\n");
	  int dim = 4;
	  float e[4][4] = {
					    {123, 1985, 3700.85, 4250.45},
					    {250, 1999, 8500.99, 9320.67},
					    {340, 2010, 6500.23, 6300.00},
					    {126, 2018, 4200.12, 4200.12}
					  };
	
	  // vamos a mostrar la matriz
	  int i, j;
	  for (i = 0; i < dim; i++) {
	    for (j = 0; j < dim; j++) {
	      if (j < dim - 1) {
	        printf("%.0f | ", e[i][j]);
	      } else {
	        printf("%.2f | ", e[i][j]);
	      }
	    }
	    printf("\n");
	  }
	
	  float mayor = 0.0;
	  float codigoEmpleadosMayor;
	  int N = dim;
	  
	  /*
	   B
	  
	  Es para encontrar al empleado 250 con el mayor sueldo en el segund semestre 
	  columna 0 es del empleado
	  columna 3 es del sueldo de cada empleado
	  
	  las filas son cada empleado
	  */
	  
	  for (i = 0; i < N; i++) {
	    if (e[i][0] == 250 && e[i][3] > mayor) {
	      mayor = e[i][3];
	      codigoEmpleadosMayor = e[i][0];
	    }
	  }
	
	  printf("-> Codigo del empleado con mayor sueldo es %.0f\n", codigoEmpleadosMayor);
	
	  /*
	  C
	  
	  generar el vector sT donde van a estar los sueldos totales de los empleados con antigüedad mayor a 2 años
	  */
	
	  int k = 0; // índice para recorrer el nuevo vector
	  float sT[4]; // Por defecto, si todos los empleados cumplen la condición
	  for (i = 0; i < 4; i++) {
	    /*
	    la columna 1 tiene el año de nacimiento de cada empleado
	    las sumo las columnas 2 y 3, que son los sueldos en las 2 mitades de año
	    */
	    if (2023 - e[i][1] > 20) {
	      sT[k] = e[i][2] + e[i][3]; // sumo el sueldo de todo el año
	      k++;
	    }
	  }
	
	  printf("-> El vector ST es : ");
	  for (i = 0; i < k; i++) {
	    printf("%.2f |", sT[i]);
	  }
	  
	  /*
	  D
	  */
	 float aux;
	int b = 0; // bandera para que no busque de más
	char resultado[100];
	
	printf("\n -> ingrese el codigo de empleado a buscar : ");
	scanf("%f", &aux);
	
	for (i = 0; i < 4; i++) {
	   
	    if (b == 0) {
	        // este If es para chequear la bandera
	        if (aux == e[i][0]) {
	            // Estamos en la condición de encontrar al candidato
	
	            if (e[i][2] > e[i][3]) {
	                // gano más el primer trimestre
	                strcpy(resultado, "El primer trimestre es mayor que el segundo");
	            } else {
	                // gano más o igual el segundo trimeste
	                strcpy(resultado, "El segundo trimestre es mayor que el primero");
	            }
	            b = 1;
	        }
	    } else {
	        // es para que salga directo del FOR
	        i=3;
	    }
	}
	
	if (b == 0) {
	    // caso de no encontrar al empleado en la lista
	    printf("Codigo de empleado no existe");
	} else {
	    printf("%s", resultado);
	}
    
    
    return 0;
}
