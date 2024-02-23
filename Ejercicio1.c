#include <stdio.h>

int main(){
	float x =0;
	printf("Entre un numero:");
	scanf("%f", &x);
	if(x == 4 || x == 1 ){
		printf("El numero no es primo");
	}else{
		printf("El numero es primo");
	}
	
	return 0;
}
