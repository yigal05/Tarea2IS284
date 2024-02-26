/*
-Fecha de publicaci�n : 25/02/2024
- Hora de publicaci�n : 10 PM
- Versi�n de su c�digo : 1.1
-Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versi�n del lenguaje utilizado : C11
- Versi�n del compilador utilizado : 4.7.1
- Versi�n del S.O sobre el que compilo y probo su c�digo : Windows 11 22H2 
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnol�gica de Pereira
- Programa de Ingenier�a de Sistemas y Computaci�n
- Asignatura IS284 Programaci�n II
- Este programa lee una clave y un precio a pagar , dependiendo de la clave
  ingresada hara cierto descuento.
*/
#include <stdio.h>

int main(){
	int key=0; //Esta variable guardara la clave para el decuento
	float originalPrice = .0, discountPrice=0; // originalPrice guardara el precio a pagar sin descuento
	// discountPrice guardara el precio a pagar con descuento
	printf("Este programa te hara un descuento dependiendo de la clave que ingreses\n\
la clave puede ser 1 o 2 \n\
Salvedad: Para valores fuera de este rango, no garantizamos los resultados.\n");
	printf("Entre clave: ");
	scanf("%i", &key);
	printf("Entre precio Original: ");
	scanf("%f", &originalPrice);
	if (key== 1){
		discountPrice=originalPrice*.9;
	}else if (key==2){
		discountPrice=originalPrice*.8;
	}// endif
	printf("Clave ingresada: %i , Precio orignal %.0f, Precio con descuento: %.0f",key, originalPrice, discountPrice) ;
	return 0;
}
