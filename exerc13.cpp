#include <stdio.h>
#include <math.h>

int main(){
	
	//Declara��o de vari�veis
	float salario, acrescimo ,novo_salario;
	
	//Entrada de dados
	printf("Digite seu salario:\n");
	scanf("%f", &salario);
	
	//Realiza o c�lculo do aumento de 25% do sal�rio
	acrescimo = salario * 0.25; 
	 
    //Realiza o c�lculo do novo sal�rio 
	novo_salario = salario + acrescimo;
	
	//Mostra o resultado dos calculos no monitor / sa�da de dados 
	printf("Seu novo salario e:\n %.2f", novo_salario);
	
	return 0;
	
}
