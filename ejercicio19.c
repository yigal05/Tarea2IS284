#include <stdio.h>

int main(){
	int dozens=0,price=0;
	printf("Entre cantidad de docenas:");
	scanf("%i",&dozens);
	printf("Entre price de docenas:");
	scanf("%i",&price);
	float finalPrice = dozens*price;
	if (dozens>3){
		int excess = dozens-3;
		printf("el monto es %.0f, con un descuento de %.0f el total a pagar es %0.f, se le han obsequiado %i producto/s" , finalPrice,finalPrice*0.15,finalPrice*0.85, excess);
	}else{
		printf("el monto es %.0f, con un descuento de %.0f el total a pagar es %0.f, No hay obsequios" , finalPrice,finalPrice*0.1,finalPrice*0.9);
	}
	return 0;
}
