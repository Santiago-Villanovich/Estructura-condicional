#include <stdio.h>
#include <stdlib.h>

/* 7. Ingresar cuatro valores, sumar el 1ro y el 2do, el 3ro y el 4to, indicar e imprimir cuál de
estas sumas es mayor */

int main(int argc, char *argv[]) {
	
	int num1,num2,num3,num4,rta1,rta2;
	
	printf("Ingrese el primer y segundo valor a sumar:\n");
	scanf("%d %d",&num1,&num2);
	printf("Ingrese el tercer y cuarto valor a sumar:\n");
	scanf("%d %d",&num3,&num4);	
	
	rta1=num1+num2;
	rta2=num3+num4;
	
	if (rta1>rta2){
		printf("La suma de los dos primeros valores es mayor\n ");
	}else{
		printf("La suma de los dos ultimos valores es mayor\n ");
	}
	
	system("pause");
	return 0;
}
