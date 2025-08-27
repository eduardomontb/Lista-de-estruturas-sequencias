//Crie um programa que receba a largura e o comprimento de um lote de terra e mostre a área total existente.
#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	float largura, comprimento, area_total;
	
	//Entrada de dados
	printf("Digite a largura  do lote de terra (em metros):\n");
	scanf("%f", &largura);
	
	printf("Digite o comprimento, do lote de terra (em metros):\n");
	scanf("%f", &comprimento);
	
	//Processamento de cálculos
	//cálculo da área total
	area_total = largura * comprimento; 
	
	//Mostra o resultado dos calculos no monitor / saída de dados 
	printf("A area total do lote de terra e:\n %.2f metros quadrados", area_total);
	
	return 0;
}
