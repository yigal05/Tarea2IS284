#include <stdio.h>

int main(){
	int numberShirts=0;
	int price = 0;
	printf("Entre numnero de camisas: ");
	scanf("%i", &numberShirts);
	printf("Entre price : ");
	scanf("%i", &price);
	int finalPrice= numberShirts*price;
	if (numberShirts>=3){
		printf("20 a usted se le cobrara: %f", finalPrice*.8) ;
	}else {
		printf("10 a usted se le cobrara: %f", finalPrice*.9) ;
	}
	return 0;
}
