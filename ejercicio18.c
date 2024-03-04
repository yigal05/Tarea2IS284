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
- El programa calcula el costo de estacionamiento segun el tiempo que se uso el servicio
  leera horas y minutos.
*/
#include <stdio.h>
#include <math.h>

int main(){
	float hours=.0, minutes=.0; /*Estas variables almacenaran:
	      horas   y minutos que se uso el servicio*/
	printf("Calculador de tarifa por estacionamiento: HORA A $1800\n");
	printf("Entre horas: ");
	scanf("%f", &hours);
	printf("Entre minutos: ");
	scanf("%f", &minutes);
	minutes = ( fmod(minutes, 60)== 0 ) ? minutes/60 :  floor(minutes/60)+1;
	float numbersHours= hours+minutes; //Esta varibale almacena cantidad de horas
	printf("El total a pagar es: %0.f", numbersHours*1800);
	return 0;
}
