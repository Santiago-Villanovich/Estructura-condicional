#include <stdio.h>
#include <stdlib.h>

/* 10. Ingresar tres valores correspondientes al día, mes y año de una fecha, indicar si es válida,
considerar los años bisiestos */

int main(int argc, char *argv[]) {
	
	int dia,mes,anno;
	
	printf("ingrese el dia: ");
    scanf("%d" ,&dia);
    printf("ingrese el mes: ");
    scanf("%d" ,&mes);
    printf("ingrese el anio: ");
    scanf("%d" ,&anno);

	
	if(anno%4==0 && anno%100!=0 || anno%400==0){
		if(mes == 1 || mes == 3 || mes==5 || mes==7 || mes==8 || mes==9 || mes==12){
			if(dia>0 && dia<=31){
				printf("fecha valida en un anio bisiesto       ");
			}else{
				printf("fecha inexistente       ");
			}
		}else{
			if(mes==4 || mes==6 || mes==9 || mes==11){
				if(dia>0 && dia<=30){
					printf("fecha valida en un anio bisiesto         ");
				}else{
					printf("fecha inexistente       ");
				}
			}else{
				if(mes==2){
					if(dia>0 && dia<=29){
						printf("fecha valida en un anio bisiesto       ");
					}else{
						printf("fecha inexistente       ");
					}
				}else{
					printf("fecha inexistente      ");
				}
			}
		}
	}else{
		if(mes==1 || mes == 3 || mes==5 || mes==7 || mes==8 || mes==9 || mes==12){
			if(dia>0 && dia<=31){
				printf("fecha valida en un anio no bisiesto      ");
			}else{
				printf("fecha inexistente      ");
			}
		}else{
			if(mes==4 || mes==6 || mes==9 || mes==11){
				if(dia>0 && dia<=30){
					printf("fecha valida en un anio bisiesto      ");
				}else{
					printf("fecha inexistente     ");
				}
			}else{
				if(mes==2){
					if(dia>0 && dia<=28){
						printf("fecha valida en un anio bisiesto     ");
					}else{
						printf("fecha inexistente     ");
					}
				}else{
					printf("fecha inexistente     ");
				}
			}
		}
		
	}
	
	system("pause");
		
	return 0;
}
