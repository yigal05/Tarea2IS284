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
