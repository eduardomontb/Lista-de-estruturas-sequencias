#include <stdio.h>

int main(){
	
	//Declara��o de vari�veis
	float C, F;
	
	//Entrada de dados
	printf("Digite o valor da temperatura em  graus Celsius:\n");
	scanf("%f", &C);
	
	//Processamento de c�lculos
	//Calcula a convers�o de Celsius para Fahrenheit
	F = (9 * C + 160) / 5;
	
	//sa�da de dados
	printf("Conversao em graus Fahrenheit: %.2f", F);
	
	return 0;
}
