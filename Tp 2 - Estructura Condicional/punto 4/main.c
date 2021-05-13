#include <stdio.h>
#include <stdlib.h>

/* 4. Ingresar dos valores y realizar e imprimir la resta del mayor menos el menor */

int main(int argc, char *argv[]) {
	
	int numero1,numero2,resultado1,resultado2;

	
	printf ("Ingrese un valor: ");
    scanf("%d",& numero1);
    printf("Ingrese otro valor: ");
    scanf("%d",& numero2);

    resultado1=numero1-numero2;
    resultado2=numero2-numero1;

    if (numero1>numero2){ printf("su resultado es: %d\n",resultado1);
	}else{ printf("su resultado es: %d\n",resultado2);
	}

	system("pause");
	
	return 0;
}
