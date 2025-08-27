//Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária. Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da
//diária por apartamento para o final de semana completo, elabore um programa para calcular:
//• Valor promocional da diária;
//• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
//• Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
//• Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%.
#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	int numero_apartamentos;
	float  valor_diaria, valor_promocional, total100, total70, perda;
	
	//Entrada de dados
	printf("Digite o numero de apartamendos do hotel:\n");
	scanf("%d", &numero_apartamentos);
	
	printf("Digite o valor da o valor da diária por apartamento para o final de semana completo:\n");
	scanf("%f", &valor_diaria);
	
	//Processamento de cálculos
	//Calcula o valor promocional da diária 
	valor_promocional = valor_diaria * (0.75);
	
	//Calcula o valor total com 100% de ocupação usando o valor promocional
	total100 = valor_promocional * numero_apartamentos;
	
	//Calcula o valor total com 70% de ocupação usando o valor total com 100% de ocupaçã
	total70 =  total100 * (0.7);
	
	//Calcula a perda do hotel em relação ao valor total sem promoção
	perda = (numero_apartamentos * valor_diaria) - total100;
	
	//Saída de dados
	printf("\n\nValor promocional da diaria: R$ %.2f\n", valor_promocional);
    printf("Valor total com 100%% de ocupacao: R$ %.2f\n", total100);
    printf("Valor total com 70%% de ocupacao: R$ %.2f\n", total70);
    printf("Valor que o hotel deixara de arrecadar com a promocao: R$ %.2f\n", perda);

	return 0;
	
}
