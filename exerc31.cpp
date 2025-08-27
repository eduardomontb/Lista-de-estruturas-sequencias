//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a
//percentagem do distribuidor sobre o resultado). Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um algoritmo que leia o custo de fábrica de um carro e informe o custo ao
//consumidor do mesmo.
#include <stdio.h>

int main(){
	
	float custo_fabrica;
	float porcentagem_distribuidor, porcentagem_imposto;
	
	printf("Digite o custo da fabrica:\n");
	scanf("%f", &custo_fabrica);
	
	porcentagem_imposto = custo_fabrica + (custo_fabrica * 45 / 100);
	
	porcentagem_distribuidor = porcentagem_imposto + (porcentagem_imposto * 28 / 100);
	
	printf("\n\nO valor do consumidor e:\n %.2f", porcentagem_distribuidor);
	
	return 0;
	
}
