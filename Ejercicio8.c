#include <stdio.h>

int main(){
	int number1, number2,number3;
	printf("Entre numero 1: ");
	scanf("%i",&number1);
	printf("Entre numero 2: ");
	scanf("%i",&number2);
	printf("Entre numero 3: ");
	scanf("%i",&number3);
	if ( number1*number2 == number3){
		printf("si");
	}else {
		printf("no");
	}
	return 0;
}
