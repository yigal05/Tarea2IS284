#include <stdio.h>

int main(){
	int cost=0;
	int amount = 0;
	printf("Entre cost: ");
	scanf("%i", &cost);
	printf("Entre cantidad : ");
	scanf("%i", &amount);

	int finalPrice= cost*amount;
	if (finalPrice>500000){
		printf("cantidad invertida: %.0f, Cantidad Banco: %.0f, Credito fabricante: %.0f , Interes cobrado: %0.f",finalPrice*0.55 , finalPrice*0.3, finalPrice*0.15 , (finalPrice*0.15)*0.2    );
	}else{
		printf("cantidad invertida: %.0f,  Credito fabricante: %.0f ,Interes cobrado: %0.f",finalPrice*0.7 , finalPrice*0.3 , (finalPrice*0.3)*0.2);
	}	
	return 0;
}
