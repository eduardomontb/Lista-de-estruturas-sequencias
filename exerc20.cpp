#include <stdio.h>
#include <math.h>

int main (){
	
	//Declaração de variáveis
	double numero1, numero2, numero3, soma, media;
	
	//Entrada de dados
	printf("Digite o valor do primeiro numero :\n");
	scanf("%lf", &numero1);
	
	printf("Digite o valor do segundo numero :\n");
	scanf("%lf", &numero2);
	
	printf("Digite o valor do terceiro numero :\n");
	scanf("%lf", &numero3);
	
	//Processamento de cálculos
	//
	soma = numero1 + numero2 + numero3;
	media = soma / 3;
	
	//Saída de dados
	printf("soma:\n %.2lf\n\n", soma);
	printf("media:\n %.2lf\n\n", media);
	
	
	//Restos
	printf("\nResto da soma por %.0f = %.2f", numero1, fmod(soma, numero1));
	printf("\nResto da soma por %.0f = %.2f",numero2, fmod(soma, numero2));
	printf("\nResto da soma por %.0f = %.2f", numero2, fmod(soma, numero3));
	
}
