#include <stdio.h>
#include <stdlib.h>

/* 8. Ingresar la edad y la altura de dos personas, indicar e imprimir la estatura del de mayor
edad */

int main(int argc, char *argv[]) {
	
	int edad1,edad2;
	float altura1,altura2;
	
	printf("Ingrese la edad y la altura de la primera persona:\n");
	printf("edad: ");
	scanf("%d",&edad1);
	printf("altura: ");
	scanf("%f",&altura1);
	
	printf("Ingrese la edad y la altura de la segunda persona:\n");
	printf("edad: ");
	scanf("%d",&edad2);
	printf("altura: ");
	scanf("%f",&altura2);
	
	if(edad1>edad2){
		printf("La estatura del de mayor edad es %.2f\n\n",altura1);
	}else{
		printf("La estatura del de mayor edad es %.2f\n\n",altura2);
	}
	
	system("pause");
	
	return 0;
}
