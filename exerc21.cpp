#include<stdio.h>
#include<math.h>

int main(){
	
	//Declaração de variáveis
	float comprimento, largura, profundidade, metroCubico, valor;
	
	//Entrada de dados
	printf("Digite o valor do comprimento da piscina:\n");
	scanf("%f", &comprimento);
	
	printf("Digite o valor da largura da piscina:\n");
	scanf("%f", &largura);
	
	printf("Digite p valor da profundidade da psicina:\n");
	scanf("%f", &profundidade);
	
	//Processamento de cálculos
	//calcula o volume da piscina
	metroCubico = comprimento * largura * profundidade;
	
	//calcula o valor da construção
	valor = metroCubico * 45;
	
	//saída de dados
	printf("\n\n\n//////////////////RESULTADO/////////////////////\nVolume da piscina: \n %.2f\n\n", metroCubico);
	printf("Valor da construcao:\n %.2f", valor);
	
	return 0;
}
