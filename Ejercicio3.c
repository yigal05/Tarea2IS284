#include <stdio.h>

int main(){
	int dayIndex =0 ;
	printf("Entre un numero:");
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
	}
	
	return 0;
}
