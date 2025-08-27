#include <stdio.h>

int main(){
	
	int numero_apartamentos;
	float  valor_diaria, valor_promocional, total100, total70, perda;
	
	printf("Digite o numero de apartamendos do hotel:\n");
	scanf("%d", &numero_apartamentos);
	
	printf("Digite o valor da o valor da diária por apartamento para o final de semana completo:\n");
	scanf("%f", &valor_diaria);
	
	valor_promocional = valor_diaria * (0.75);
	
	total100 = valor_promocional * numero_apartamentos;
	
	total70 =  total100 * (0.7);
	
	perda = (numero_apartamentos * valor_diaria) - total100;
	
	printf("\n\nValor promocional da diaria: R$ %.2f\n", valor_promocional);
    printf("Valor total com 100%% de ocupacao: R$ %.2f\n", total100);
    printf("Valor total com 70%% de ocupacao: R$ %.2f\n", total70);
    printf("Valor que o hotel deixara de arrecadar com a promocao: R$ %.2f\n", perda);

	return 0;
	
}
