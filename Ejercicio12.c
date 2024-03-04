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
- Este programa calcula el salario semanal de un trabajador dependiendo
  de ciertas condiciones
*/
#include <stdio.h>

int main(){
	float hoursWorked=.0; // Esta variable almecenara la cantidad de horas trabajadas
	printf("Este programa calcula el salario semanal de un trabajador dependiendo de las siguientes condiciones:\n");
	printf("- Si trabaja 40 horas o menos se le paga $16 por hora\n");
	printf("- Si trabaja mas de 40 horas se le paga $16 por cada una de las primeras 40 horas y $20 por cada hora extra.\n");
	printf("Entre las horas trabajadas durante la semana: ");
	scanf("%f", &hoursWorked);

	if (hoursWorked>40){
		printf("Su salario semanal es: %.0f", (hoursWorked-40)*20+40*16);
	}else{
		printf("Su salario semanal es: %.0f",hoursWorked*16);
	} //endif
	return 0;
}
