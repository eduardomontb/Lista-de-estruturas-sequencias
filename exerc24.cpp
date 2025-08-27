//No momento, por conta da administração pública péssima e da corrupção em todos os setores estatais, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um
//algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.
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
