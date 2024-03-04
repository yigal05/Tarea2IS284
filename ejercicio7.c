/*
-Fecha de publicación: 25/02/2024
- Hora de publicación: 10 PM
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
- Este programa recibe dos numero e imprime si ambos son pares o impares
- Salvedad: los numero pares son obligariamente enteros por ende no hay 
  decimal par , no garantizamos resultados si entra un numero flotante
*/
#include <stdio.h>

int main(){
	int number1 = 0 , number2 = 0; /*Estas variables guardaran
	    primer  y segundo numero */
	printf("Este programa recibe dos numero y dice si ambos son pares o impares\nEntre el primer numero: ");
	scanf("%i",&number1);
	printf("Entre el segundo numero: ");
	scanf("%i",&number2);
	int remainderNumber1 = number1%2; // Esta variable guardara residuo de number1÷2
	int remainderNumber2 = number2%2; // Esta variable guardara residuo de number2÷2
	if ( remainderNumber1 == 0 && remainderNumber2 ==0){
		printf("Ambos numeros son pares");
	}else if( remainderNumber1 != 0 && remainderNumber2 !=0){
		printf("Ambos numeros son impares");
	} //endif 
	return 0;
}
