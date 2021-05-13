#include <stdio.h>
#include <stdlib.h>

/* 3. Ingresar dos valores y realizar e imprimir el producto si el 1ro es mayor al 2do, si son
iguales solo indicarlo */

int main(int argc, char *argv[]) {

    int n1=0;
	int n2=0;
	
	
	printf("Ingrese valor 1: ");
    scanf("%d", &n1);
    printf("Ingrese valor 2: ");
    scanf("%d", &n2);
    
    int n3=n1*n2;
    
	if (n1>n2){ printf(" resultado es %d",n3);
 	}
	
	if (n1==n2){ printf("sus valores son iguales");
	}
	
	return 0;
}
