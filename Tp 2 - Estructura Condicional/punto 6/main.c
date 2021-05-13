#include <stdio.h>
#include <stdlib.h>

/* 6. Ingresar tres valores, sumarlos, calcular el promedio e indicar e imprimir cuál de estos
valores es mayor al promedio  */

int main(int argc, char *argv[]) {
	
	float numero1,numero2,numero3;
	float promedio;	
	
	printf("ingrese los valores a evaluar:\n");
	scanf("%f  %f  %f",&numero1,&numero2,&numero3);

	promedio=(numero1+numero2+numero3)/3;
	
	if (numero1>promedio){
		printf("\nel valor %.2f es mayor al promedio       ",numero1);
	}
	if (numero2>promedio){
		printf("\nel valor %.2f es mayor al promedio       ",numero2);
	}
	if (numero3>promedio){
		printf("\nel valor %.2f es mayor al promedio       ",numero3);
	}
	
	system("pause");
	
	return 0;
}
