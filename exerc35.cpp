#include <stdio.h>
#include <math.h>

int main(){
	
	float peso, altura, imc;
	
	printf("informe seu peso (em kg):\n");
	scanf("%f", &peso);
	
	printf("informe sua altura (em metros):\n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	printf("\n\nSeu índice de massa corpórea e:\n %.2f", imc);
	
	return 0;
}
