#include<stdio.h>
#include<math.h>

int main(){
	
	//Declaração de variáveis
	float salario, salmin, quatnmin;
	
	//Entrada de dados
	printf("digite seu salario;\n");
	scanf("%f", &salario);
	
	printf("digite o salrio minimo atual:\n");
	scanf("%f", &salmin);
	
	//Realiza o cálculo de quantos salários mínimos a pessoa ganha
	quatnmin = salario / salmin;
	
	//Mostra o resultado do cálculo no monitor / saída de dados 
	printf("Voce recebe %.2f salarios minimos.\n",  quatnmin);
	
	return 0;
}
