#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
	float a, b, c, d, e, f, x, y;
	
	//Entrada de dados
	printf("Digite o valor de a:\n");
	scanf("%f", &a);
	
	printf("Digite o valor de b:\n");
	scanf("%f", &b);
	
	printf("Digite o valor de c:\n");
	scanf("%f", &c);
	
	printf("Digite o valor de d:\n");
	scanf("%f", &d);
	
	printf("Digite o valor de e:\n");
	scanf("%f", &e);
	
	printf("Digite o valor de f:\n");
	scanf("%f", &f);
	
	//Processamento de cálculos
	//calcula o valor de y
	y = (a * f -  c * d) / (a * e - b * d);
	
	//calcula o valor de x
	x = (c * e - b * f) / (a * e - b * d);
	
	//saída de dados
	printf("\n\n\nO valor de x:\n %.2f\n\n", x);
	
	printf("O valor de y:\n %.2f", y);
	
	return 0;
}
