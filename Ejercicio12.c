#include <stdio.h>

int main(){
	float hoursWorked=.0;
	printf("Entre horas trabajadas: ");
	scanf("%f", &hoursWorked);

	if (hoursWorked>40){
		printf("a usted se le pagara: %f", (hoursWorked-40)*20+40*16);
	}else{
		printf("se le pagara hora a 16");
	}
	return 0;
}
