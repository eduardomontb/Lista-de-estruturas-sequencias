#include<stdio.h>
#include<math.h>

int main(){
	
	//Declaração de variáveis
	float valorProduto, novoValor;
	
	//Entrada de dados
    printf ("Digite o valor do produto:\n");
	scanf("%f", &valorProduto);	
	
	//Processamento de cálculos
	// calcula valor com desconto de 9%
	novoValor = valorProduto - (valorProduto * 9) / 100;
	
	//saída de dados
	printf("\n\n\nValor com desconto de 9 porcento:\n %.2f", novoValor);
	
	return 0;
}
