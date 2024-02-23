#include <stdio.h>

int main(){
	int key=0;
	float originalPrice = .0;
	printf("Entre key: ");
	scanf("%i", &key);
	printf("Entre precio Original: ");
	scanf("%f", &originalPrice);

	if (key== 1){
		printf("a usted se le cobrara: %f", originalPrice*.9) ;
	}else if (key==2){
		printf("a usted se le cobrara: %f", originalPrice*.8) ;
	}
	return 0;
}
