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



       				////printf("\nCargar filas : ");
		///scanf("%d",&dim);
//int dim=3;
    float e[3][3]={
        		 					{123,1985,3700.85,4250.45},
        							{250,1999,8500.99,9320.67},
        							{340,2010,6500.23,6300.00},
        							{126,2018,4200.12,4200.12}
        						 };
    //vamos a mostrar la matriz
    int i=0,col=0;
    for(i=0;i<3;i++){
      for(col=0;i<3;col++){

        //con el if voy a poder imprimir la mascara con sus debidos decimales cada elemntos de la matriz
        if(col<3){
          prinf("%.0f  | ",e[i][col]);
        }else{
          prinf("%.2f  | ",e[i][col]);
        }
      }
      prinf("\n");
    }
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
