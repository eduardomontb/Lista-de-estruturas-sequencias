#include <stdio.h>

int main(){

    //Declara��o de vari�veis
    int inteiro1, inteiro2, resultado;
	
	//Entrada de dados
	printf("Digite o primeiro numero inteiro:\n");
	scanf("%d", &inteiro1);
	
	printf("Digite o segundo numero inteiro:\n");
	scanf("%d", &inteiro2);
	
	//Realiza a divis�o entre dois numeros inteiros
	resultado = inteiro1 / inteiro2;
	
	//Mostra o resultado da divis�o no monitor / sa�da de dados
	printf("O resultado da divisao do primeiro numero inteiro pelo segundo e:\n %d", resultado);
	
	return 0;
}
