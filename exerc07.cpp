//Faça um algoritmo que receba dois números, calcule e imprima um elevado ao outro.
#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
	float base, expoente, resultado;
	
	//Entrada de dados
	printf("digite a base:\n");
	scanf("%f", &base);
	
	printf("digite o expoente:\n");
	scanf("%f", &expoente);
	
	//Realiza a potenciação da base pelo expoente
	resultado = pow(base, expoente);
	
	//Mostra o resultado da potenciação no monitor / saída de dados 
	printf("%f elevado a %f = %f", base, expoente, resultado);
	
	return 0;
}
