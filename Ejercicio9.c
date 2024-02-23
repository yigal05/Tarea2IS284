#include <stdio.h>

int main(){
	float interest=.0, capital=.0, interests=0;
	printf("Entre el interes en %: ");
	scanf("%f", &interest);
	printf("Entre el capital a invertir: ");
	scanf("%f", &capital);
	interests =  capital + (interest*capital/100.0);
	if (interests>7000){
		printf("Invierta");
	}else{
		printf("NO INVIERTA");
	}
	return 0;
}
