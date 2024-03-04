/*
-Fecha de publicación : 25/02/2024
- Hora de publicación : 10 PM
- Versión de su código : 1.1
-Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Versión del compilador utilizado : 6.3.0
- Versión del S.O sobre el que compilo y probo su código : Windows 11 22H2 
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- Este programa calcula el total a pagar por la compra de camisas
  dependiendo de la cantidad de camisas compradas hara un descuento
*/
#include <stdio.h>

int main(){
	int numberShirts=0; //Esta variable guardara el total de camisas compradas
	int price = 0; //Esta variable guardara el precico por camisa
	printf("En un almacen si se compran tres camisas o mas se aplica un descuento del\n\
20%% sobre el total de la compra y si son menos de tres camisas un descuento del 10%%.");
	printf("\nEntre numero de camisas: ");
	scanf("%i", &numberShirts);
	printf("Entre el precio por camisa : ");
	scanf("%i", &price);
	int finalPrice= numberShirts*price; //Esta variable guardara el precio a pagar por las camisas
	if (numberShirts>=3){
		printf("Descuento: 20%%, A usted se le cobrara: %0.f", finalPrice*.8) ;
	}else {
		printf("Descuento: 10%%, A usted se le cobrara: %.0f", finalPrice*.9) ;
	} //endif
	return 0;
}
