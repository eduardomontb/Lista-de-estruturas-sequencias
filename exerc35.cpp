//Faça um algoritmo que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea. Ele mede a relação entre peso e altura (peso em Kg, dividido pelo quadrado da altura em metros).
#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
	float peso, altura, imc;
	
	//Entrada de dados
	printf("informe seu peso (em kg):\n");
	scanf("%f", &peso);
	
	printf("informe sua altura (em metros):\n");
	scanf("%f", &altura);
	
	//Processamento de cálculo
	//calcula o índice de massa corpórea
	imc = peso / (altura * altura);
	
	//Saída de dados
	printf("\n\nSeu índice de massa corpórea e:\n %.2f", imc);
	
	return 0;
}
