#include <stdio.h>

int main(){
	int purchaseValue=0;
	printf("Ingrese valor de compra: ");
	scanf("%i",&purchaseValue);
	if(purchaseValue>100000){
		printf("pagar %.0f", (float)purchaseValue*0.8) ;
	}else{
		printf("pague completo %i", purchaseValue);
	}
}
