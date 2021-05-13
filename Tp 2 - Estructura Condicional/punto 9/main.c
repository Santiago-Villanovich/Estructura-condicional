#include <stdio.h>
#include <stdlib.h>

/* 9. Ingresar el valor de la hora y el tiempo trabajado por un empleado, calcular su sueldo
conociendo que recibe un premio de $ 100 si trabajo más de 50 hs y si trabajo más de 150
hs le dan otros $ 100 adicionales. Imprimir el sueldo */

int main(int argc, char *argv[]) {
	
	float ValorH;
	float sueldo=0;
	int HorasT;
	
	printf("ingrese el valor por hora: ");
    scanf("%f" ,&ValorH);
	printf("ingrese las horas trabajadas: ");
    scanf("%d" ,&HorasT);
    
    sueldo=ValorH*HorasT;
    
    if ((HorasT>0)&&(HorasT<50)){
    	printf("Su sueldo es: %.2f \n\n",sueldo);
	}else{
		if(HorasT<150){
			sueldo+=100;
			printf("Su sueldo es: %.2f \n\n",sueldo);
		}else{
			if(HorasT>=150){
				sueldo+=200;
				printf("Su sueldo es: %.2f \n\n",sueldo);
			}
		}
	}
	
	system("pause");
	
	return 0;
}
