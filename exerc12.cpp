#include <stdio.h>
#include <math.h>

int main(){
	
	//Declara��o de vari�veis
	float salario, imposto;
	
	//Entrada de dados
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	//Realiza o c�lculo do valor do imposto de renda a ser pago
	imposto = salario * 0.05;
	
	//Mostra o resultado do c�lculo no monitor / sa�da de dados 
	printf("O valor do imposto a ser pago e:\n %f", imposto);
	
	return 0;
}
