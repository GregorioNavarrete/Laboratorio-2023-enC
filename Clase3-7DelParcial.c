#include <stdio.h>
#include <stdlib.h>
#include <string.h> //trabaja con Vector CHAR

int main(int argc, char *argv[]) {
	
		int dim;
		printf("\nCargar filas : ");
		scanf("%d",&dim);
	 	
	 	/*
		 float e[dim][4]={
		 					{fila1},
							{fila2},
							{fila3},
							{fila4}	
					 	
						 };
		 */
		
		
		int fil,col,numeros[dim][3];/* rellenamos la matriz */
		for (fil=0;fil<dim;fil++){
			
			for (col=0;col<3;col++){
				scanf("%d",&numeros[fil][col]);
			}
			printf("\n");			
		}

				
		/* visualizamos la matriz */
		fil=0;
		printf("\nMostrar la Matris");
		for (fil=0;fil<dim;fil++){
			for (col=0;col<3;col++){
				printf("%d",numeros[fil][col]); 
			}
			printf("\n");			
		}
		
		
	
	
	float mayor=0.0;
	float codigoEmpleadosMayor;
	int i;
	/*
	A 
	
	Es para encontra al empleado 250 con el mayor sueldo 
	columna 0 es del empleado 
	columna 3 es del sueldo de cada empleado 
	
	las filas son cada empleado
	
	*/
	for(i=0;i<N;i++){
		if(e[i][3]>mayor){
			mayor=e[i][3];
			codigoEmpleadosMayor=e[i][0];
			
		}
									
	}
	
	/*
	C 
	
	generar el vector sT donde vana estar los sueldos totales de los empleados con atiguaded mmayor a 2 anios
	
	*/
	int k=0;	//indise para recorre el nuevo vector
	float sT[N];//Por defecto, si todos los empleados cumplen la condicion 
	for(fil=0;fil<N ;fil++){
		/*
		la clumna 1 tien el anio de nacimiento de cada empleado 
		
		las sumo las columnas 2 y 3 , que son los sueldo en las 2 mitades de anio 
		*/
		if(2023-e[fil][1]>20){
			sT[k]=e[fil][2]+e[fil][3]; //sumo el sueldo de todo el anio
			k++;
		}
									
	}
			
			
				
	
	return 0;
}
