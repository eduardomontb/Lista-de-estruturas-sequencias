#include<stdio.h>
#include<math.h>

int main(){
	
	//Declaração de variáveis
	float Vproduto1, Vproduto2, Vproduto3, Vproduto4, Vproduto5, somatorio, valorPago, troco;
	
	//Entrada de dados
	printf("Digite o valo do primeiro produto:\n");
	scanf("%f", &Vproduto1);
	
	printf("Digite o valo do segundo produto:\n");
	scanf("%f", &Vproduto2);
	
	printf("Digite o valo do terceiro produto:\n");
	scanf("%f", &Vproduto3);
	
	printf("Digite o valo do quarto produto:\n");
	scanf("%f", &Vproduto4);
	
	printf("Digite o valo do quinto produto:\n");
	scanf("%f", &Vproduto5);
	
	printf("Valor do pagamento:\n");
	scanf("%f", &valorPago);
	
	//Processamento de cálculos
    //Soma de todos os produtos comprados
	somatorio = Vproduto1 + Vproduto2 + Vproduto3 + Vproduto4 + Vproduto5;
	
	//calcula o troco 
	troco = valorPago - somatorio;
	
	//saída de dados
	printf("\n\n\nValor total da compra:\n %.2lf\n\n", somatorio);
	printf("Pagamento: \n %.2f\n\n", valorPago);
	printf("Troco que devera ser devolvido:\n %.2f", troco);
	
	return 0;
	
}
	
