//Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem, utilizando-se um automóvel que faz 12 Kms por litro. Para obter o cálculo, o usuário deverá fornecer o
//tempo gasto e a velocidade média durante a viagem. Desta forma, será possível obter a distância percorrida (distância = tempo * velocidade).
#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
	float tempo_gasto, velocidade_media, distancia, combustivel_gasto;
	
	//Entrada de dados
	printf("Digite o tempo gasto da viagem:\n");
	scanf("%f", &tempo_gasto);
	
	printf("Digite a velocidade media durante a viagem:\n");
	scanf("%f", &velocidade_media);
	
	//Processamento de cálculos
	//Calcula a distância percorrida na viagem
	distancia = tempo_gasto * velocidade_media;
	
	//Calcula a quantidade de combustível gasto
	combustivel_gasto = distancia / 12;
	
	//Saída de dados
	printf("\n\nA distancia perdcorrida nessa viagem foi de %.2f metros\n", distancia);
	
	printf("A quantidade de combustível gasto nessa viagem foi %.2f litros", combustivel_gasto);
	
	return 0;
}
