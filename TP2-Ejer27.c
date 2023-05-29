#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 25

Incompleto !!!!!
*/

int main(int argc, char *argv[]) {
  int N,i,DNI,T,B,ContDias20,cont,sueldoM,sueldoF,sueldoTotal,Max,DNIMax;
  int contDias20;
  char Sexo,SexoMax;
  
	  printf("Ingrese un cantidad de empleados : ");
	  scanf("%d", &N);

	/*
	INT_MIN    el valor mas grande de 
	INT_MAX		el valor mas grande de 
	*/
  	//bandera
  	B=0;	
	contDias20=0;
	cont=0;
	sueldoM=0;
	sueldoF=0;
	Max=0;
	DNIMax=0;
	
	for (i = 0; i < N; i++) {
	  	//ingresar trabajador
	  	printf("Ingrese DNI : ");
		scanf("%d", &DNI);
		printf("Ingrese Sexo : ");
		getchar();                                              //poner bien el get !!!!!
		scanf("%c", &Sexo);
		printf("Ingrese Dias trabajados : ");
		scanf("%d", &T);		
	  	

	  	if(T<20){
	  		// contar las que trabajan menos de 20 dias
	  		contDias20=contDias20+1;
		}
		//A
		if(Sexo=='M'){
			//contar cantidad de hombres totales 
			cont=cont+1;
			//sumar todos los sueldo de los hombre 
			sueldoM=sueldoM+(T*300);
		}
		
		//B
		//busacar al sueldo mayor, el sueldo es por dias  , busco al que mas dias trabaja  
		if(B==0){
			//Valor inicial del 
			Max=T;
			DNIMax=DNI;
			SexoMax=Sexo;
		}
		
		if(Max<T && B==1){
			Max=T;
		}
		
		//C
		if(Sexo=='F'){
			//sueldo de las mujeres 
			sueldoF=sueldoF+(T*300);
		}

	}
	
	//Todos los sueldos que paga la empresa 
	sueldoTotal=sueldoF+sueldoM;
	printf("El sueldo total es : %d \n",sueldoTotal);	
	
	//El empleado que cobra mas 
	printf("El empleado que mas cobra es %d , sexo %c ,sueldo %d",DNIMax,SexoMax,Max*300);	
	
  
  return 0;
}
