#include <stdio.h>
#include <stdlib.h>

/* 11. Ingresar el sueldo, categor�a y antig�edad de un empleado, calcular el sueldo final de cada
uno de ellos, si el empleado es de la categor�a 1 se le adicionara $50 por cada a�o de
antig�edad. */

int main(int argc, char *argv[]) {
	
	float sueldo,sueldoFinal;
	int categoria,antiguedad;
	
	printf("Ingrese el sueldo: ");
	scanf("%f",&sueldo);
    printf("Ingrese la categoria del empleado: ");
	scanf("%d",&categoria);
	printf("Ingrese la antiguedad: ");
	scanf("%d",&antiguedad);
	
	sueldoFinal=sueldo*antiguedad;
	
	if(categoria==1){
		sueldoFinal += (50*antiguedad);
		printf("El sueldo del empleado ser: %.2f\n\n",sueldoFinal);
	}else{
		printf("El sueldo del empleado ser: %.2f\n\n",sueldoFinal);
	}
	
	system("pause");
	
	return 0;
}
