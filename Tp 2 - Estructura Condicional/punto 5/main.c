#include <stdio.h>
#include <stdlib.h>

/* 5. Ingresar los tres lados de un triángulo e indicar que tipo de triángulo es */

int main(int argc, char *argv[]) {
	
	// a + b > c
	// a + c > b  /* regla para identificar si es un triangulo */
	// b + c > a
	
	int lado1,lado2,lado3;
	
	printf("ingrese el valor del lado 1: ");
	scanf("%d",& lado1);
	printf("ingrese el valor del lado 2: ");
	scanf("%d",& lado2);
	printf("ingrese el valor del lado 3: ");
	scanf("%d",& lado3);


	
	if (((lado1 + lado2) > lado3) && ((lado1 + lado3) > lado2) && ((lado2 + lado3) > lado1)){
		printf("Es un triangulo: ");
		
		if ((lado1 == lado2) && (lado2 == lado3)){
			printf("Equilatero.\n");
		}else{
			if ((lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3)){
				printf("Escaleno.\n");
			}else{
				printf("Isosceles.\n");
			}
		}		
	}else{
		printf("No es un triangulo.\n");
	}
	
	system("pause");
	

	return 0;
}
