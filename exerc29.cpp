#include <stdio.h>

int main(){
	
	//Declara��o de vari�veis
	float valor_compra, prestacoes;
	
	//Entrada de dados
	printf("Digite o valor da compra:\n");
	scanf("%f", &valor_compra);
	
	//Processamento de c�lculos
	//Calcula o valor de cada presta��o
	prestacoes = valor_compra / 5;
	
    //sa�da de dados
	printf("\n\nValor das prestacoes:\n %.2f", prestacoes);
	
	return 0;
	
	
}
