//Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//• A idade dessa pessoa;
//•Quantos anos ela terá em 2028.
#include <stdio.h>

int main(){
	
	int ano_nascimento, ano_atual;
	int  idade, idade2028;
	
	printf("Digito o ano de nascimento:\n");
	scanf("%d", &ano_nascimento);
	
	printf("Digite o ano atual:\n");
	scanf("%d", &ano_atual);
	
	idade = 2025 - ano_nascimento;
	
	idade2028 = 2028 - ano_nascimento;
	
	printf("\n\nA pessoa tem %d anos de idade.", idade);
	
	printf("\n\nEm 2028 a pessoa tera %d anos de idade.", idade2028);
	
	return 0;
}
