#include <stdio.h>

int main(){
	float kms;
	printf("Entre km recorridos: ");
	scanf("%f",&kms);
	if ( kms <300){
		printf("total a pagar es 400000");
	}else{
		float excess = kms-300;
		float finalPrice= 400000+excess*15000;
		if(excess <1000){
			printf("total a pagar es %.0f", finalPrice);
		}else{
			printf("total a pagar es %.0f", 10900000+(kms-1000)*10000);
		}
	}
	return 0;
}
