#include <stdio.h>

int main (){
	
	//Declaração de variáveis
	float preco_custo, valor_venda, percentual;
	
	//Entrada de dados
	printf("Digite o valor do preco de custo do produto:\n");
	scanf("%f", &preco_custo);
	
	printf("Digite o percentual a se acrescito:\n");
	scanf("%f", &percentual);
	
	//Processamento de cálculos
	//Calcula o valor de venda do produto com acréscimo do percentual
	valor_venda = preco_custo +  (preco_custo  * percentual/ 100 );
	
	//saída de dados
	printf("\n\nO valor de venda do produto e:\n  R$ %.2f", valor_venda);
	
	return 0;
}
