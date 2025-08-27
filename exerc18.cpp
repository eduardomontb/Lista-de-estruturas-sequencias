//Faça um programa que receba a quantidade e o valor de três produtos, no seguinte formato: quantidade1 valor1 quantidade2 valor2 quantidade3 valor3. O programa deve calcular esses valores
//seguindo a fórmula total = quantidade1* valor1 + quantidade2 * valor2 + quantidade3 * valor3. O valor total deve ser apresentado no final da execução do programa.
#include <stdio.h>

int main (){
	
	
	//Declaração de variáveis
	double quantidade1, valor1, quantidade2, valor2, quantidade3, valor3, resultado;
	
	//Entrada de dados
	//Produto 1
	printf("digite a quantidade do produto 1:\n");
	scanf("%lf", &quantidade1);
	
    printf("digite o valor do produto 1:\n");
	scanf("%lf", &valor1);
	
	//Produto 2
	printf("digite a quantidade do produto 2:\n");
	scanf("%lf", &quantidade2);
	
    printf("digite o valor do produto 2:\n");
	scanf("%lf", &valor2);
	
	//Produto 3
	printf("digite a quantidade do produto 3:\n");
	scanf("%lf", &quantidade3);
	
    printf("digite o valor do produto 3:\n");
	scanf("%lf", &valor3);
	
	
	//Processamento de cálculos
	//calcula o valor total da compra
	resultado = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);
	
	//Mostra o resultado dos calculos no monitor / saída de dados 
	printf("O valor total de sua compra foi:\n %.2lf", resultado);
	
	return 0;
}
