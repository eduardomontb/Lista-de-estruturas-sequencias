//Faça um programa que receba um número inteiro, calcule e imprima:
//• a raiz quadrada desse número;
//• esse número elevado ao quadrado.
#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
    int numero; 
    double raiz_quadrada, elevado_ao_quadrado;
	
	//Entrada de dados
	printf("Digite o numero para saber sua raiz quadrada e sua elevaçao ao quadrado:\n");
	scanf ("%d", &numero);
	
	//Realiza o cálculo da raiz quadrada
	raiz_quadrada = sqrt(numero);
	
	//realiza o cálculo do número elevado ao quadrado
	elevado_ao_quadrado = numero * numero; 
	
	//Mostra o resultado dos calculos no monitor / saída de dados
	printf("A Raiz quadrado de %d e:\n %.2lf\n", numero, raiz_quadrada);
	
	printf("O quadrado de %d e:\n %.2lf", numero, elevado_ao_quadrado);
	
	return 0;
}
