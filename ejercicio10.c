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
- Este programa dice si un alumno aprueba o no dependiendo si el promedio 
  de 3 notas es mayor a 3.0 o no 
- Salvedad: El programa como bien se explica recibe notas en un rango de [0.0,5.0]
  si digita la nota en rangos como [0,50] o otro que no sea el que se sugiere
  no se garantizan resultados
*/
#include <stdio.h>

int main(){
	float grade1=.0, grade2=.0, grade3=0 ;
	// almacenara la primer nota , almacenara la segunda nota , almacenara la tercer nota
	printf("Este programa determina si un estudiante aprueba un curso.\nRecibe 3 notas [0.0,5.0] aprueba si su promedio es mayor o igual 3.0\n");
	printf("reprueba en caso contrario\nEntre nota 1: ");
	scanf("%f", &grade1);
	printf("Entre nota 2 :");
	scanf("%f", &grade2);
	printf("Entre nota 3 :");
	scanf("%f", &grade3);
	float avarage =  (grade1+grade2+grade3)/3; //almacena el promedio de las 3 notas
	if (avarage>=3){
		printf("El estudiante aprueba el curso con %0.2f",avarage);
	}else{
		printf("El estudiante reprueba el curso con %0.2f",avarage);
	}//endif
	return 0;
}
