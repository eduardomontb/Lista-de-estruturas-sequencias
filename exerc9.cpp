#include<stdio.h>
#include<math.h>

int main(){
	
	//Declara��o de vari�veis
	float salario, salmin, quatnmin;
	
	//Entrada de dados
	printf("digite seu salario;\n");
	scanf("%f", &salario);
	
	printf("digite o salrio minimo atual:\n");
	scanf("%f", &salmin);
	
	//Realiza o c�lculo de quantos sal�rios m�nimos a pessoa ganha
	quatnmin = salario / salmin;
	
	//Mostra o resultado do c�lculo no monitor / sa�da de dados 
	printf("Voce recebe %.2f salarios minimos.\n",  quatnmin);
	
	return 0;
}
