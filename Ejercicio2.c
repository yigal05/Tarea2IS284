/*
-Fecha de publicaci�n : 25/02/2024
- Hora de publicaci�n : 10 Pm
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
- Este programa lee un numero y e imprime si es par o no
- Salvedad: los numero pares son obligariamente enteros por ende no hay 
  decimal par , no garantizamos resultados si entra un numero flotante
*/
#include <stdio.h>

int main(){
	int x =0 ; // Esta variable guardara el numero al que se le quiere averiguar si es par o no
	printf("Este programa, lee un numero e imprime si es par o impar..\nEntre un numero: ");
	scanf("%i", &x);
	if( x % 2 ){
		printf("El numero no es par");
	}else{
		printf("El numero es par");
	} //endif
	
	return 0;
}
