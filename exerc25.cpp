#include <stdio.h>
#include <math.h>

int main (){
	
	//Declara��o de vari�veis
	double i, p, resultado;
	int n;
     
    //Entrada de dados
	printf("Digite o numero da taxa:\n");
	scanf("%lf", &i);
	
	// Converte para decimal
	i = i /100;
	
	printf("Digite o numero da aplicacao mensal:\n");
	scanf("%lf", &p);
	
	printf("Digite o numero de meses:\n");
	scanf("%d", &n);
	
	
    // Processamento do c�lculo
    //calcula o valor do rendimento da aplica��o mensal
    resultado = (p * (pow(1 + i, n) - 1 )) / i;
	
	//sa�da de dados
	printf("Valor acumulado:\n %.2lf", resultado);
	
	return 0;	

}
