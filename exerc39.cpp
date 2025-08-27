//percorrida (distância = tempo * velocidade). 38) Considerando uma eleição de apenas 2 candidatos, elabore um algoritmo que leia do teclado o número total de eleitores, 
//o número de votos do primeiro candidato e o número de votos do segundo candidato. Em seguida, o algoritmo deverá apresentar o percentual de votos de cada um dos candidatos
//e o percentual de votos nulos.
#include <stdio.h>

int main (){
	
	int total_eleitores, numero_votos1, numero_votos2;
	
	float percento1, percento2, percento_nulo;
	
	printf("digite o numero total de eleitores:\n");
	scanf("%d", &total_eleitores);
	
	printf("Digite o numero de votos do candidato numero um:\n");
	scanf("%d", &numero_votos1);
	
	printf("Digite o numero de votos do candidato numero dois:\n");
	scanf("%d", &numero_votos2);c
	
	percento1 =  (float)numero_votos1 / total_eleitores  * 100;
	
	percento2 = (float)numero_votos2 / total_eleitores * 100;
	
	percento_nulo = (float)(total_eleitores - (numero_votos1 + numero_votos2)) / total_eleitores * 100;
	
	printf("\n\nA porcentagem de votos que o candidato numero um e:\n %.2f", percento1);
	
	printf("\n\nA porcentagem de votos que o candidato numero dois e:\n %.2f", percento2);
	
	printf("\n\nA porcentagem de votos nulos e:\n %.2f", percento_nulo);
	
	return 0;
}
