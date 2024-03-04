/*
-Fecha de publicaci�n : 25/02/2024
- Hora de publicaci�n : 10 PM
- Versi�n de su c�digo : 1.1
-Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado : C11
- Versi�n del compilador utilizado : 6.3.0
- Versi�n del S.O sobre el que compilo y probo su c�digo : Windows 11 22H2 
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Asignatura IS284 Programaci�n II
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
