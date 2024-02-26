/*
-Fecha de publicaci�n : 25/02/2024
- Hora de publicaci�n : 10 PM
- Versi�n de su c�digo : 1.1
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado : C11
- Versi�n del compilador utilizado : 4.7.1
- Versi�n del S.O sobre el que compilo y probo su c�digo : Windows 11 22H2 
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Asignatura IS284 Programaci�n II
- Este programa mira si hace un descuento del 20% dependiendo el monto a pagar
  por la compra
*/
#include <stdio.h>

int main(){
	int purchaseValue=0; //Esta variable almacenara el valor a pagar por la compra
	printf("En un almacen se hace un 20%% de descuento a los clientes cuya compra supere los $100,000. \nIngrese valor de su compra $: ");
	scanf("%i",&purchaseValue);
	if(purchaseValue>100000){
		printf("Descuento: Aplica , total a pagar : $%.0f", (float)purchaseValue*0.8) ;
	}else{
		printf("Descuento: N/A , total a pagar: $%i", purchaseValue);
	}//endif
}
