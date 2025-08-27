#include <stdio.h>
#include <math.h>

int main(){
	
	float tempo_gasto, velocidade_media, distancia, combustivel_gasto;
	
	printf("Digite o tempo gasto da viagem:\n");
	scanf("%f", &tempo_gasto);
	
	printf("Digite a velocidade media durante a viagem:\n");
	scanf("%f", &velocidade_media);
	
	distancia = tempo_gasto * velocidade_media;
	
	combustivel_gasto = distancia / 12;
	
	printf("\n\nA distancia perdcorrida nessa viagem foi de %.2f metros\n", distancia);
	
	printf("A quantidade de combustível gasto nessa viagem foi %.2f litros", combustivel_gasto);
	
	return 0;
}
