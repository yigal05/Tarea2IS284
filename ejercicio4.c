#include <stdio.h>

int main(){
	int monthIndex =0 ;
	printf("Entre un numero:");
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
	}else{
		printf("El mes es Diciembre");
	}
	
	return 0;
}

