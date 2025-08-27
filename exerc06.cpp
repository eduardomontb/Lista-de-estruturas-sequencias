//Faça um algoritmo que receba um número inteiro, calcule e imprima a tabuada de multiplicação desse número.
#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	int numero1, mult1, mult2, mult3, mult4, mult5, mult6, mult7, mult8, mult9, mult10;
	
	//Entrada de dados
	printf("entre com um numero para saber sua tabuada de multiplicacao:\n");
	scanf("%d", &numero1);
	
	// Realiza o cálculo das multiplicações
	mult1 = numero1 * 1;
	mult2 = numero1 * 2;
	mult3 = numero1 * 3;
	mult4 = numero1 * 4;
	mult5 = numero1 * 5;
	mult6 = numero1 * 6;
	mult7 = numero1 * 7;
	mult8 = numero1 * 8;
	mult9 = numero1 * 9;
	mult10 = numero1 * 10;
	
	//Mostra a tabuada na tela do numero escolhido no monitor / saída de dados
	printf("resultado:\n %d * 1 = %d", numero1, mult1);
	printf("\n %d * 2 = %d", numero1, mult2);
	printf("\n %d * 3 = %d", numero1, mult3);
	printf("\n %d * 4 = %d", numero1, mult4);
	printf("\n %d * 5 = %d", numero1, mult5);
	printf("\n %d * 6 = %d", numero1, mult6);
	printf("\n %d * 7 = %d", numero1, mult7);
	printf("\n %d * 8 = %d", numero1, mult8);
	printf("\n %d * 9 = %d", numero1, mult9);
	printf("\n %d * 10 = %d", numero1, mult10);
	
	return 0;
}
