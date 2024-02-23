#include <stdio.h>

int main(){
	float years=.0, salary=40000;
	printf("Entre el numero de años de antiguedad del trabajador: ");
	scanf("%f",&years);
	if (years >10){
		printf("El salary mensual es de %.2f)", salary*1.1/12);
	}else if (years>5) {
		printf("El salary mensual es de %.2f)", salary*1.07/12);
	}else if (years>3){
		printf("El salary mensual es de %.2f)", salary*1.05/12);
	}else{
		printf("El salary mensual es de %.2f)", salary*1.03/12);
	}
	return 0;
}
