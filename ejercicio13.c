#include <stdio.h>
#include <string.h>

int main(){
	char activity[50] = "NULL";
	float time = .0;
	
	printf("Entre activity realizada: ");
	scanf("%s", &activity);

	printf("Entre time(minutos): ");
	scanf("%f", &time);
	
	if ( strcmp( activity, "dormir") == 0 ){
		printf("quemo %f", time*1.08);
	}else if ( strcmp( activity, "reposo") == 0 ){
	
		printf("quemo %f", time*1.66);
	}
	return 0;
}
