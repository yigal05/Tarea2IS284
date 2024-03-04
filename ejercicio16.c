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
- El programa analiza lo mas viable para un empresa dependiendo el costo de unas piezas que
  se quieren adquir y realiza los calculos para el costo dependiendo de cada situacion.
*/
#include <stdio.h>

int main(){
	int cost=0; // Esta variable almacenara el precio por pieza 
	int amount = 0; // Esta variable almacenara la cantidad de piezas que se quieren
	printf("Se quiere hacer una compra de varias piezas de la misma clase a una fabrica de refacciones. Dependiendo del monto\n\
total de la compra, se decidira que hacer para pagar al fabricante.\n\
Si el monto total de la compra excede de $500000 la empresa tendra la capacidad de invertir de su propio\n\
dinero un 55%% del monto de la compra, pedir prestado al banco un 30%% y el resto lo pagara solicitando un\n\
credito al fabricante.\n\
Si el monto total de la compra no excede de $500000 la empresa tendra capacidad de invertir de su propio\n\
dinero un 70%% y el restante 30%% lo pagara solicitando credito al fabricante. El fabricante cobra por concepto\n\
de intereses un 20%%  sobre la cantidad que se le pague a credito.");
	printf("\nEntre precio de cada pieza: ");
	scanf("%i", &cost);
	printf("Entre cantidad piezas a adquirir: ");
	scanf("%i", &amount);

	int finalPrice= cost*amount; // Esta variable almacenara el precio a pagar por todas la piezas
	if (finalPrice>500000){
		printf("Cantidad invertida: %.0f, Cantidad Banco: %.0f, Credito fabricante: %.0f , Interes cobrado: %0.f",finalPrice*0.55 , finalPrice*0.3, finalPrice*0.15 , (finalPrice*0.15)*0.2    );
	}else{
		printf("Cantidad invertida: %.0f,  Credito fabricante: %.0f ,Interes cobrado: %0.f",finalPrice*0.7 , finalPrice*0.3 , (finalPrice*0.3)*0.2);
	}//endif
	return 0;
}
