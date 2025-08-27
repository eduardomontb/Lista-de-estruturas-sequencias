//Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com aumento de 37%.
#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	float antigo_salario, novo_salario;
	
	//Entrada de dados
	printf("Digite o valor do salario atual:\n");
	scanf("%f", &antigo_salario);
	
	//Processamento de cálculo
	//Calcula o novo salário com acréscimo de 37%
	novo_salario = antigo_salario + (antigo_salario * 37 / 100);
	
	//Saída de dados
	printf("\n\nValor do novo salario com acrescimo de 38%:\n R$ %.2f", novo_salario);
	
	return 0;
}
