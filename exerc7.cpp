#include <stdio.h>
#include <math.h>

int main(){
	
	//Declara��o de vari�veis
	float base, expoente, resultado;
	
	//Entrada de dados
	printf("digite a base:\n");
	scanf("%f", &base);
	
	printf("digite o expoente:\n");
	scanf("%f", &expoente);
	
	//Realiza a potencia��o da base pelo expoente
	resultado = pow(base, expoente);
	
	//Mostra o resultado da potencia��o no monitor / sa�da de dados 
	printf("%f elevado a %f = %f", base, expoente, resultado);
	
	return 0;
}
