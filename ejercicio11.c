/*
-Fecha de publicación : 25/02/2024
- Hora de publicación : 10 PM
- Versión de su código : 1.1
- Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Versión del compilador utilizado : 4.7.1
- Versión del S.O sobre el que compilo y probo su código : Windows 11 22H2 
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
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
