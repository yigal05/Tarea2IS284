/*
-Fecha de publicación: 25/02/2024
- Hora de publicación: 10 PM
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
- Dice si un numero es mayor a 100 o no
*/
#include <stdio.h>

int main(){
	float x =.0; //Guarda el numero que se quiere saber si es mayor o menor 100
	printf("Este programa dice si un numero es mayor o menor a 100\nEntre numero: ");
	scanf("%f",&x);
	if (x >100){
		printf("Es mayor a 100");
	}else{
		printf("No es mayor que 100");
	}//endif
	return 0;
}
