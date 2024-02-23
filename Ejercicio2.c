#include <stdio.h>

int main(){
	int x =0 ;
	printf("Entre un numero:");
	scanf("%i", &x);
	if( x % 2 ){
		printf("El numero es impar");
	}else{
		printf("El numero es par");
	}
	
	return 0;
}
