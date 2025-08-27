//Faça um algoritmo que receba o custo de um espetáculo teatral e o preço do convite esse espetáculo. Esse programa deve calcular e mostrar:
//•A quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado.
//•A quantidade de convites que devem ser vendidos para que se tenha um lucro de 23%.
#include <stdio.h>
#include <math.h>


int main(){
	
	float custo, preco_convite;
	int min_convite, lucro23;
	
	printf("Digite o valor do custo do espetaculo teatral realizado:\n");
	scanf("%f", &custo);
	
	printf("Digite o valor do convite para esse espetaculo:\n");
	scanf("%f", &preco_convite);
	
	min_convite = ceil(custo / preco_convite);
	
	lucro23 =  ceil((custo * 1.23) / preco_convite);
	
	printf("\n\nA quantidade de convites que devem ser vendidos para que pelo menos o custo do espetáculo seja alcançado e:\n %i", min_convite);
	
	printf("\n\nA quantidade de convites que devem ser vendidos para que se tenha um lucro de 23 porcento e:\n %i", lucro23);
	
	return 0;
	
}
