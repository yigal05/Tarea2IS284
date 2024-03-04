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
- El programa calcula el IMC de una persona y en base a esto le notifica en que condición se encuentra.
- Salvedad : Si ingresa valores en una unidad de medida no se garantizan resultados
*/
#include <stdio.h>
#include <math.h>

int main(){
	float weight = .0,height = .0 , imc=.0; /*Estas variables almacenaran:
    peso de la persona , altura de la persona , indice de masa corporal de la persona*/
	printf("Calculadora de IMC:\n");
	printf("Ingrese su peso (kg): ");
	scanf("%f",&weight);
	printf("Ingrese su estatura (m): ");
	scanf("%f",&height);
	imc= weight/pow(height,2); // Esta variable almacena el IMC
	if ( imc < 16){
		printf("Criterio de ingreso en hospital");
	}else if (imc < 17){
		printf("Infrapeso");
	}else if (imc < 18){
		printf("Bajo peso");
	}else if (imc < 25){
		printf("Peso normal");
	}else if (imc < 30){
		printf("Sobrepeso (obesisdad de grado I)");
	}else if (imc < 35){
		printf("Sobrepeso (obesisdad de grado II)");
	}else if (imc < 40){
		printf("Sobrepeso (obesisdad de grado III)");
	}else{
		printf("Obesidad morbida (obesidad de grado IV)");
	} //endif
	return 0;
}
