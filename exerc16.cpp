//Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e imprima:
//• a idade dessa pessoa;
//• essa idade convertida em semanas.
#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	int ano_nascimento, ano_atual, idade, semanas;
	
	//Entrada de dados
	printf("digite seu ano de nascimento:\n");
	scanf("%d", &ano_nascimento);
	
	printf("digite o ano em que estamos:\n");
	scanf("%d", &ano_atual);
	
	//Processamento de cálculos
	//calcula a idade em anos
	idade = ano_atual - ano_nascimento;
	 
	//converte anos para semanas
	semanas = idade * 52;

    //Mostra o resultado dos calculos no monitor / saída de dados 
    printf("sua idade e:\n %d\n\n", idade);
	
	printf("sua idade em semanas e:\n %d", semanas);
    
    return 0;
    
}
	

