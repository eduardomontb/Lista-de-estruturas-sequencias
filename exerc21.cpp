//Uma determinada pessoa que trabalha com construção de piscinas precisa de um programa que calcule o valor das construções solicitadas pelos clientes, sabendo-se que os clientes sempre fornecem
//o comprimento, a largura e a profundidade da piscina a ser construída. Leve em consideração que o valor da construção é cobrado por m3 de água que a piscina conterá e o preço é de R$ 45.00 por m3
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
