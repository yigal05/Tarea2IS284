#include <stdio.h>

int main(){
	int number= 0;
	int start=0 , end=0;
	printf("Ingrese number:");
	scanf("%i",&number);
	end = number%10;
	start = number/100;
	if ( end == start){
		printf("El number es capicuo");
	}else{
		printf("el number no es capicuo");
	}
}
