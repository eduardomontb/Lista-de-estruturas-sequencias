#include <stdio.h>

int main(){

    //Declara��o de vari�veis
	float Nreal1, Nreal2, subtracao = 0;
	
	//Entrada de dados
	printf("entre com o primeiro numero\n");
	scanf("%f", &Nreal1);
	
	printf("entre com o segundo numero\n");
	scanf("%f", &Nreal2);
	 
	//Realiza a subtra��o de dois numeros reais
	subtracao = Nreal1 - Nreal2;
	
	//Mostra o resultado da subtra��o no monitor / sa�da de dados
	printf("Resultado: %f", subtracao);

    return 0;

}
