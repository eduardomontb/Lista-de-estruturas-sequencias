//Faça um algoritmo que apresente, para um salário informado pelo usuário, um novo salário com aumento de 37%.
#include <stdio.h>

int main(){
	
	float antigo_salario, novo_salario;
	
	printf("Digite o valor do salario atual:\n");
	scanf("%f", &antigo_salario);
	
	novo_salario = antigo_salario + (antigo_salario * 37 / 100);
	
	printf("\n\nValor do novo salario com acrescimo de 38%:\n R$ %.2f", novo_salario);
	
	return 0;
}
