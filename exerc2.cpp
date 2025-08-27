#include <stdio.h>

int main(){

    //Declaração de variáveis
	float Nreal1, Nreal2, subtracao = 0;
	
	//Entrada de dados
	printf("entre com o primeiro numero\n");
	scanf("%f", &Nreal1);
	
	printf("entre com o segundo numero\n");
	scanf("%f", &Nreal2);
	 
	//Realiza a subtração de dois numeros reais
	subtracao = Nreal1 - Nreal2;
	
	//Mostra o resultado da subtração no monitor / saída de dados
	printf("Resultado: %f", subtracao);

    return 0;

}
