#include <stdio.h>
#include <stdlib.h>

/* 2. Ingresar un valor indicar e imprimir si es positivo, negativo o cero*/

int main(int argc, char *argv[]) {
	
	int n1=0;
	
	printf("ingrese un valor: ");
	scanf("%d",&n1);
	
	if(n1 != 0)
	{printf("su numero es ");
	
		if(n1>0){printf("mayor a 0\n\n");
		}else{printf("menor a 0\n\n");
		}
	}else{printf("su numero es igual a 0\n\n");
	}
	
	system("pause");
	
	
	
	
	return 0;
}
