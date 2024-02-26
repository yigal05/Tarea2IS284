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
- Este programa lee tres numero e imprime si el primero*segundo=tercero 
*/
#include <stdio.h>

int main(){
	float number1 =.0, number2=.0,number3=.0;
	// almacena primer numero /almacena segundo numero / almacena tercer numero
	printf("Este programa recibe 3 numeros e imprime por pantalla si el\nproducto del primero por el segundo es igual al tercero\nEntre numero 1: ");
	scanf("%f",&number1);
	printf("Entre el primer numero: ");
	scanf("%f",&number2);
	printf("Entre el segundo numero: ");
	scanf("%f",&number3);
	if ( number1*number2 == number3){
		printf("Si, %fx%f=%f ",number1,number2,number3);
	}else {
		printf("No, %fx%f no es igual a %f", number1,number2,number3);
	} //endif
	return 0;
}
