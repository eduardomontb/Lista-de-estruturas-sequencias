#include <stdio.h>

int main(){
	
	//Declara��o de vari�veis
	float largura, comprimento, area_total;
	
	//Entrada de dados
	printf("Digite a largura  do lote de terra (em metros):\n");
	scanf("%f", &largura);
	
	printf("Digite o comprimento, do lote de terra (em metros):\n");
	scanf("%f", &comprimento);
	
	//Processamento de c�lculos
	//c�lculo da �rea total
	area_total = largura * comprimento; 
	
	//Mostra o resultado dos calculos no monitor / sa�da de dados 
	printf("A area total do lote de terra e:\n %.2f metros quadrados", area_total);
	
	return 0;
}
