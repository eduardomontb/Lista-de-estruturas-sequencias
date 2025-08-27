#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
	float salario, imposto;
	
	//Entrada de dados
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	//Realiza o cálculo do valor do imposto de renda a ser pago
	imposto = salario * 0.05;
	
	//Mostra o resultado do cálculo no monitor / saída de dados 
	printf("O valor do imposto a ser pago e:\n %f", imposto);
	
	return 0;
}
