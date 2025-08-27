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
