//Faça um algoritmo que receba o salário de um funcionário, calcule e imprima o novo salário sabendo-se que este sofreu um aumento de 25%.
#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
	float salario, acrescimo ,novo_salario;
	
	//Entrada de dados
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	//Realiza o cálculo do aumento de 25% do salário
	acrescimo = salario * 0.25; 
	 
    //Realiza o cálculo do novo salário 
	novo_salario = salario + acrescimo;
	
	//Mostra o resultado dos calculos no monitor / saída de dados 
	printf("Seu novo salario e:\n %.2f", novo_salario);
	
	return 0;
	
}
