#include <stdio.h>

int main (){
	
	
	//Declara��o de vari�veis
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
	
	
	//Processamento de c�lculos
	//calcula o valor total da compra
	resultado = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);
	
	//Mostra o resultado dos calculos no monitor / sa�da de dados 
	printf("O valor total de sua compra foi:\n %.2lf", resultado);
	
	return 0;
}
