/*
- Fecha de publicación: 25/02/2024
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
- Este programa lee un numero del 1 al 5 y dice si es primo o no
- Salvedad : Solo funciona para numeros en este rango [1,5]
*/
#include <stdio.h>

int main(){
	float number =0; //Esta variable almacenara el numero que se quiere saber si es primo o no
	printf("Este programa, lee un numero entre uno(1) y cinco(5), e imprime\nsi es primo o no.\n");
	printf("Entre un numero: ");

	scanf("%f", &number);
	if(number == 4 || number == 1 ){
		printf("El numero no es primo");
	}else{
		printf("El numero es primo");
	}//endif
	
	return 0;
}
