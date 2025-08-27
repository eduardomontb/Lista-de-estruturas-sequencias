#include <stdio.h>
#include <math.h>

int main (){
	
	//Declara��o de vari�veis
	float distancia, velocidade, tempo, velocidade_ms;
	
	//Entrada de dados
	printf("Digite a distancia (em km):\n");
	scanf("%f", &distancia);
	
	printf("Digite a velocidade (em km/h):\n");
	scanf("%f", &velocidade);
	
	//Processamento de c�lculos
	//calcula o tempo em horas
	tempo = distancia / velocidade;
	
	//Converte a velocidade para m/s
	velocidade_ms = velocidade * 1000 / 3600;
	
	//sa�da de dados
	printf("\n\n\nO tempo para chagada:\n %.2f horas\n\n\n", tempo);
	printf("Velocidade em m/s:\n %.2f", velocidade_ms);
	
	return 0;
	
}
