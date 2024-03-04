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
- El programa calcula el costo por la cantidad de kilometros recorridos con un carro alquilado.
*/
#include <stdio.h>

int main(){
	float kms =.0; // Esta variables almacenara los kms recorridos
	float originalPrice= .0; // Esta variable guarda cuanto se le cobrara por los kms recorridos
	printf("Una compa�ia dedicada al alquiler de automoviles cobra un monto fijo de $400000 para los primeros 300 Km de \n\
recorrido. Para mas de 300 km y hasta 1000 km, cobra un monto adicional de $ 15.000 por cada Km en exceso\n\
sobre 300. Para mas de 1000 km cobra un monto adicional de $ 10.000 por cada Km en exceso sobre 1000.\n\
Los precios ya incluyen el 20%%  del impuesto general a las ventas, Este algoritmo determina el monto\n\
a pagar por el alquiler de un vehiculo y el valor del impuesto.\n");
	printf("Entre la cantidad de kilometros recorrido: ");
	scanf("%f",&kms);
	if ( kms <=300){
		originalPrice=400000;
	}else{
		if(kms <=1000){
			originalPrice= 400000+(kms-300)*15000;
		}else{
			originalPrice= 400000+700*15000+(kms-1000)*10000 ;
		}//endif
	}//endif
	printf("Total a pagar es $%.0f, el impuesto que contiene ese monto es $%.0f ", originalPrice,originalPrice*0.2);
	return 0;
}
