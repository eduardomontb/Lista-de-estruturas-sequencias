//Cada degrau de uma escada tem uma altura X. Faça um algoritmo que receba essa altura e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá
//subir para atingir seu objetivo.
#include <stdio.h>
#include <math.h>

int main (){
	
	float altura_degrau, altura_objetivo;
	int faltam_subir;
	
    printf("Digite a altura que cada degrau possui:\n");
	scanf("%f", &altura_degrau);
	
	printf("Digite a altura que pessoa deseja alcancar:\n");
	scanf("%f", &altura_objetivo);
	
	faltam_subir = ceil(altura_objetivo / altura_degrau);
	
	printf("A pessoa precisa subir %d degraus para chegar em seu objetivo.", faltam_subir);
	
	return 0;
}
