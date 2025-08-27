#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	float C, F;
	
	//Entrada de dados
	printf("Digite o valor da temperatura em  graus Celsius:\n");
	scanf("%f", &C);
	
	//Processamento de cálculos
	//Calcula a conversão de Celsius para Fahrenheit
	F = (9 * C + 160) / 5;
	
	//saída de dados
	printf("Conversao em graus Fahrenheit: %.2f", F);
	
	return 0;
}
