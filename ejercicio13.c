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
- Este programa calcula la cantidad de calorias quemadas por una persona enferma de 70 kg
  dependiendo si duerme o reposa
- Salvedad: si ingrese una palabra con caracteres distintos a los que se sugiere , no
  garantizamos resultados
*/
#include <stdio.h>
#include <string.h> // libreria que añade nuevas operaciones con strings

int main(){
	char activity[50] = "NULL"; // Esta variable guardara un string con la actividad que se ha realizado
	float time = .0, calories=0; // time guardara el tiempo en que se realizo la actividad
	//calorias guardara la cantidad de calorias quemas
	printf("Este programa calcula la cantidad de calorias quemadas por una persona enferma de 70 kg\ndependiendo de la actividad que haga y durante cuento tiempo");
	printf("\nActividades: Dormir o Reposar \nIngrese su actividad (dormir o reposo): ");
	scanf("%s", &activity);

	printf("Entre duracion(minutos): ");
	scanf("%f", &time);
	
	if ( strcmp( activity, "dormir") == 0 ){ //strcmp(string compare) 
		calories= time*1.08;
	}else if ( strcmp( activity, "reposo") == 0 ){
		calories= time*1.66;
	}//endif
	printf("Durante esta actividad se ha quemado %.2f calorias", calories);
	return 0;
}
