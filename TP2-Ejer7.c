#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	//Ejercicio 7 del TP2
	/*
	
	*/
	float num1,num2;
	char oper;
	printf(" ingrese el primer numero : ");
	scanf("%f",&num1);
	printf("\n ingrese el segundo numero : ");
	scanf("%f",&num2);
	printf("\n ingrese el Operador (+ ,- ,* ,/): ");
	getchar();
	scanf("%c",&oper);
	
	/*
Solo acepta estos 4 valores !   
	
	+=43
	-=45
	*=42
	/=47
	
	*/
  
	if(oper== 43){
		//sumo los numeros
		float aux=num1+num2;
		printf("\n  %.2f+%.2f=%.2f ",num1,num2,aux);
		
	}else{
		if(oper== 45){
			//restos los numeros
			float aux=num1-num2;		
			printf("\n  %.2f-%.2f=%.2f ",num1,num2,aux);
		}else{
			if(oper== 42){
				//multiplico
				float aux=num1*num2;
				printf("\n  %.2f*%.2f=%.2f ",num1,num2,aux);
			}else{
				//hago la divicion
				float aux=num1/num2;
				printf("\n  %.2f/%.2f=%.2f ",num1,num2,aux);
			}
		}
	}
	

	return 0;
}
