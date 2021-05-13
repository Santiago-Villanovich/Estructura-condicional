#include <stdio.h>
#include <stdlib.h>

/* 1. Ingresar dos valores, indicar e imprimir si son iguales*/

int main(int argc, char *argv[]) {
	
	int n1=0;
	int n2=0;
	
	printf("ingrese el primer valor: ");
	scanf("%d",&n1);
	printf("ingrese el primer valor: ");
	scanf("%d",&n2);
	
	if (n1 == n2){ printf("sus valores son iguales");
	}else{ printf("sus valores son distintos");
	}
	
	
	return 0;
}
