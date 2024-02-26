/*
-Fecha de publicación : 25/02/2024
- Hora de publicación : 10 Pm
- Versión de su código : 1.1
-Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Versión del compilador utilizado : 4.7.1
- Versión del S.O sobre el que compilo y probo su código : Windows 11 22H2 
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
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
