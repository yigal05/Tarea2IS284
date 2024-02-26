/*
-Fecha de publicación: 25/02/2024
- Hora de publicación: 10 PM
- Versión de su código : 1.1
-Autor. Ing(c) Yigal Fabricio Rojas Acevedo
- Nombre del lenguaje utilizado : C
- Versión del lenguaje utilizado : C11
- Versión del compilador utilizado : 4.7.1
- Versión del S.O sobre el que compilo y probo su código : Windows 11 22H2 
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- Este programa calcula el dinero generado a partir de un interes y a partir de
  esto recomienda invertir o no
*/
#include <stdio.h>

int main(){
	float interest=.0, capital=.0 ; //Estas varibalen almacenaran
	//    la tasa de interes y  el capital que se tiene 
	printf("Este programa lee dos valores. Interés(%%) y Capital. Si el dinero recibido por intereses es mayor que $7000, se le indicara al inversionista\n");
	printf("que invierta, de lo contrario se le indicara que no debe invertir\n");
	printf("Entre el interes en %% : ");
	scanf("%f", &interest);
	printf("Entre el capital en $: ");
	scanf("%f", &capital); //guarda los intereses generados
	float interests =  (interest*capital/100.0);
	if (interests>7000){
		printf("INVIERTA, SU SALDO SERA $%.0f",capital +  interests);
	}else{
		printf("NO INVIERTA");
	} //endif
	return 0;
}
