#include <stdio.h>

int main(){
	float hours=.0, minutes=.0,numbersHours=.0;

	printf("Entre hours: ");
	scanf("%f", &hours);
	printf("Entre minutes: ");
	scanf("%f", &minutes);
	numbersHours= hours+ minutes/60;
	printf("El total a pagar es: %0.f", numbersHours*1800);
	return 0;
}
