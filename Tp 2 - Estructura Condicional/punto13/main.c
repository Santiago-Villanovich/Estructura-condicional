#include <stdio.h>
#include <stdlib.h>

/* 13. Ingresar las horas trabajadas por un empleado y su categoría, calcular su sueldo sabiendo
que los empleados de la categoría 1 cobran $50, la 2 cobra $ 70 y la 3 cobra $ 80.*/

int main(int argc, char *argv[]) {
	
	int categoria,horas,sueldo;
	
	printf("ingrese la categoria del empleado y las horas trabajadas respectivamente:\n");
	scanf("%d   %d",&categoria,&horas);
	
	if(categoria==1){
		sueldo=(50*horas);
		printf("el sueldo del empleado sera: %d\n\n",sueldo);
	}else{
		if(categoria==2){
		sueldo=(70*horas);
		printf("el sueldo del empleado sera: %d\n\n",sueldo);
	    }else{
	        if(categoria==3){
	     	sueldo=(80*horas);
	    	printf("el sueldo del empleado sera: %d\n\n",sueldo);
	        }else{
	        	printf("el empleado no pertenece a ninguna de las categorias disponibles\n\n");
		         }
		}
    }
    
    system("pause");
    
	return 0;
}
