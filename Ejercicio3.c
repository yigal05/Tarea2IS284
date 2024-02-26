/*
-Fecha de publicación : 25/02/2024
- Hora de publicación : 10 PM
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
- Este programa recibe un numero y lo asocia a un dia de la semana
*/
#include <stdio.h>

int main(){
	int dayIndex =0 ; //Esta variable guarda el numero que se asociara al dia de la semana
	printf("Este programa, lee un numero entre [1 y 7] e imprime el dia que le\ncorresponde en la semana. Referencia: 1=Lunes. 7=Domingo\nEntre un numero: ");
	scanf("%i", &dayIndex);
	if(dayIndex == 1 ){
		printf("El dia es Lunes");
	}else if(dayIndex == 2){ 
	    printf("El dia es Martes"); 
	}else if(dayIndex == 3){ 
	    printf("El dia es Miercoles"); 
	}else if(dayIndex == 4){ 
	    printf("El dia es Jueves"); 
	}else if(dayIndex == 5){ 
	    printf("El dia es Viernes");
	}else if(dayIndex == 6){ 
	    printf("El dia es Sabado");
	}else{
		printf("El dia es Domingo");
	} //endif
	
	return 0;
}
