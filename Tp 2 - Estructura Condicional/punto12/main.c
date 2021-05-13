#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
	
	if(antiguedad>5){
		if(categoria==1){
		sueldoFinal += (50*antiguedad);
		printf("El sueldo del empleado sera: %.2f\n\n",sueldoFinal);
	    }else{
		printf("El sueldo del empleado sera: %.2f\n\n",sueldoFinal);
	    }
	}else{
		printf("el empleado no tiene mas de 5 anios de antiguedad\n\n");
	}
	
	system("pause");
	
	return 0;
}



