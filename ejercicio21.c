/*
-Fecha de publicaci�n
- Hora de publicaci�n
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
- El programa identifica si un numero del 100 al 999 es capic�a o no.
*/
#include <stdio.h>

int main(){
	int number= 0; /*Esta variable guarda el numero al cual se le quiere averiguar 
	si es capicuo o no*/
	printf("Identificador de numeros capic�a del 100 al 999.\n\
Salvedad: Para valores fuera de este rango, no garantizamos los resultados.");
	printf("\nEntre el numero que desea saber si es capicua o no:");
	scanf("%i",&number);
	int end = number%10; //Esta variable guarda el ultimo digito de number
	int start = number/100; //Esta variable guarda el primer digito de number
	(end == start)? printf("El numero es capicuo") : printf("El numero no es capicuo");
}
