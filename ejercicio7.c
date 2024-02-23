#include <stdio.h>

int main(){
	int number1 , number2 , remainderNumber1, remainderNumber2;
	printf("Entre numero 1: ");
	scanf("%i",&number1);
	printf("Entre numero 2: ");
	scanf("%i",&number2);
	remainderNumber1 = number1%2;
	remainderNumber2 = number2%2;
	if ( remainderNumber1 == 0 && remainderNumber2 ==0){
		printf("Ambos pares");
	}else if(( remainderNumber1 != 0 && remainderNumber2 !=0)){
		printf("Ambos impares");
	}
	return 0;
}
