/*
- Fecha de publicación : 25/02/24
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
- Este programa recibe un numero y lo asocia a un mes del año
- Salvedad: para valores fuera del rango [1, 12] no se garantizan resultados
*/
#include <stdio.h>


int main(){
	int monthIndex =0 ; // Esta variable guarda el numero que se asociara al mes del año
	printf("Este programa, lee un numero entre [1 y 12] e imprime el mes que\nle corresponde en el año. Referencia: 1=Enero. 12=Diciembre\nEntre un numero:");
	scanf("%i", &monthIndex);
	if(monthIndex == 1 ){
		printf("El mes es Enero");
	}else if(monthIndex == 2){ 
	    printf("El mes es Febrero"); 
	}else if(monthIndex == 3){ 
	    printf("El mes es Marzo"); 
	}else if(monthIndex == 4){ 
	    printf("El mes es abril"); 
	}else if(monthIndex == 5){ 
	    printf("El mes es Mayo");
	}else if(monthIndex == 6){ 
	    printf("El mes es Junio");
	}else if(monthIndex == 7){ 
	    printf("El mes es Julio");
	}else if(monthIndex == 8){ 
	    printf("El mes es Agosto");
	}else if(monthIndex == 9){ 
	    printf("El mes es Septiempre");
	}else if(monthIndex == 10){ 
	    printf("El mes es Octubre");
	}else if(monthIndex == 11){ 
	    printf("El mes es Noviembre");
	}else if(monthIndex == 12){ 
	    printf("El mes es Diciembre");}
	//endif	
	return 0;
}

