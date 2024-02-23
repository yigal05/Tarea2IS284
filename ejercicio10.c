#include <stdio.h>

int main(){
	float grade1=.0, grade2=.0, grade3=0 ;
	printf("Entre grade 1: ");
	scanf("%f", &grade1);
	printf("Entre grade 2 :");
	scanf("%f", &grade2);
	printf("Entre grade 3 :");
	scanf("%f", &grade3);
	int promedio =  (grade1+grade2+grade3)/3;
	if (promedio>=3){
		printf("gano");
	}else{
		printf("perdio");
	}
	return 0;
}
