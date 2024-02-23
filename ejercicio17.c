#include <stdio.h>
#include <math.h>

int main(){
	float weight = .0,height = .0 , imc=.0;
	printf("Ingrese su peso (kg): ");
	scanf("%f",&weight);
	printf("Ingrese su estatura (m): ");
	scanf("%f",&height);
	imc= weight/pow(height,2);
	if ( imc < 16){
		printf("Criterio de ingreso en hospital");
	}else if (imc < 17){
		printf("infrapeso");
	}else if (imc < 18){
		printf("bajo peso");
	}else if (imc < 25){
		printf("peso normal");
	}else if (imc < 30){
		printf("sobre peso (obesisdad de grado I)");
	}else if (imc < 35){
		printf("sobre peso (obesisdad de grado II)");
	}else if (imc < 40){
		printf("sobre peso (obesisdad de grado III)");
	}else{
		printf("obesidad morbida (obesidad de grado IV)");
	}
	return 0;
}
