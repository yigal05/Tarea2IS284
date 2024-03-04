/*
-Fecha de publicación : 23/02/2024
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
- El programa calcula el descuento y productos obsequiados dependiendo de la cantidad de docenas que se vaya a comprar
  si la compra es superior a 3 docenas se obsequia un producto por docena adicional y se aplica un descuento de 15% de lo
  contrario se da un descuento de 10% pero no se obsequia nada.
*/
#include <stdio.h>

int main(){
	int dozens=0,price=0; // Variables que almacenaran cantidad de docenas y el precio de cada una
	printf("Este programa calculara el descuento que se te aplicara dependiendo la \n\
cantidad de docenas que compres , si supera las 3 docenas tendras un descuento de\n\
15%% y un producto obsequio por cada docena que supere las 3 docenas , de lo contrario\n\
recibiras solo un 10%% de descuento\n");
	printf("Entre cantidad de docenas:");
	scanf("%i",&dozens);
	printf("Entre precio de docenas:");
	scanf("%i",&price);
	float finalPrice = dozens*price; //variable que almacena el precio a pagar por las docenas
	if (dozens>3){
		int excess = dozens-3;
		printf("El monto es %.0f, con un descuento de %.0f el total a pagar es %0.f, se le han obsequiado %i producto/s" , finalPrice,finalPrice*0.15,finalPrice*0.85, excess);
	}else{
		printf("El monto es %.0f, con un descuento de %.0f el total a pagar es %0.f, No hay obsequios" , finalPrice,finalPrice*0.1,finalPrice*0.9);
	} //endif
	return 0;
}
