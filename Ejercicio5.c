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
- Este programa calcula el sueldo mensual de un trabajador dependiendo su antigüedad
*/
#include <stdio.h>

int main(){
	float years=.0, salary=40000; // year guardara la antigüedad del trabador y salary el sueldo base
	printf("Este programa leyendo por teclado la antiguedad en años, calcula el sueldo mensual que le corresponde al trabajador de una empresa");
	printf("\nque cobra 40.000 euros anuales, el programa\ndebe realizar los calculos en funcion de los siguientes criterios:");
	printf("\na. Si lleva mas de 10 años en la empresa se le aplica un aumento del 10%.");
	printf("\nb. Si lleva menos de 10 años pero mas que 5 se le aplica un aumento del 7%.");
	printf("\nc. Si lleva menos de 5 años pero mas que 3 se le aplica un aumento del 5%.");
	printf("\nd. Si lleva menos de 3 años se le aplica un aumento del 3%. ");
	printf("\n\nEntre el numero de años de antiguedad del trabajador: ");
	scanf("%f",&years);
	if (years >10){
		printf("El sueldo mensual es de %.2f euros", salary*1.1/12);
	}else if (years>5) {
		printf("El sueldo mensual es de %.2f euros", salary*1.07/12);
	}else if (years>3){
		printf("El sueldo mensual es de %.2f euros", salary*1.05/12);
	}else{
		printf("El sueldo mensual es de %.2f euros", salary*1.03/12);
	}//endif
	return 0;
}
