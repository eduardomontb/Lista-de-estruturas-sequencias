//Faça um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e imprima:
//• o peso dessa pessoa em gramas;
//• se essa pessoa engordar 5%, qual será seu novo peso em gramas.
#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
	int peso_kg;
	double peso_gramas, peso_gramas5;
	
	//Entrada de dados
	printf("Digite seu peso,em kg:\n ");
	scanf("%d", &peso_kg);
	
	//processamneto do cálculos
	//Converte o peso em kg para gramas	
	peso_gramas = peso_kg * 1000;
	
	//Calcula o peso em gramas considerando engordar 5%
	peso_gramas5 = peso_gramas + (peso_gramas * 5) / 100;
	
	//Mostra o resultado dos calculos no monitor / saída de dados 
	printf("Seu peso em gramas e :\n %.2lf\n\n\n", peso_gramas);
	printf("seu peso , em gramas, se engoradar 5%:\n %.2lf " , peso_gramas5);
	
	return 0;
}
