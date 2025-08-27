//Sabe-se que o kilowatt de energia custa um quinto do salário mínimo. Faça um algoritmo quereceba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. Calcule e
//imprima:
//• o valor, em reais, de cada kilowatt;
//• o valor, em reais, a ser pago por essa residência;
//• o novo valor a ser pago por essa residência, a partir de um desconto de 15%.
#include <stdio.h>
#include <math.h>

int main(){
	
	//Declaração de variáveis
	float salario_minimo, quantidade_de_kilowatt_gasta, kilowatts_reais, pago_residencia, desconto15;
	
	//Entrada de dados
	printf("Digite o valor do salario minimo atual:\n");
	scanf("%f", &salario_minimo);
	
	printf("Digite a quantidade de quilowatts gasta:\n");
	scanf("%f", &quantidade_de_kilowatt_gasta);
	
	//Processamento de cálculos
	//Valor de cada kWh é 1/5 do salário mínimo
	kilowatts_reais = salario_minimo * 0.2;
	
	//Valor total (sem desconto)
	pago_residencia = kilowatts_reais * quantidade_de_kilowatt_gasta;
	
	//Valor total com desconto de 15%
	desconto15 = pago_residencia - (pago_residencia * 15) / 100;
	
    //Mostra o resultado dos calculos no monitor / saída de dados 
	printf("o valor, em reais, de cada kilowatt:\n %.2f\n\n\n", kilowatts_reais);
	printf("o valor, em reais, a ser pago por essa residência:\n %.2f\n\n\n", pago_residencia);
	printf("o novo valor a ser pago por essa residência, a partir de um desconto de 15%:\n %.2f", desconto15);
	
    return 0;
	
}
