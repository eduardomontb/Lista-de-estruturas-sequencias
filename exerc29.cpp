#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	float valor_compra, prestacoes;
	
	//Entrada de dados
	printf("Digite o valor da compra:\n");
	scanf("%f", &valor_compra);
	
	//Processamento de cálculos
	//Calcula o valor de cada prestação
	prestacoes = valor_compra / 5;
	
    //saída de dados
	printf("\n\nValor das prestacoes:\n %.2f", prestacoes);
	
	return 0;
	
	
}
