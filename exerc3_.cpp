#include <stdio.h>

int main(){

    //Declaração de variáveis
    int inteiro1, inteiro2, resultado;
	
	//Entrada de dados
	printf("Digite o primeiro numero inteiro:\n");
	scanf("%d", &inteiro1);
	
	printf("Digite o segundo numero inteiro:\n");
	scanf("%d", &inteiro2);
	
	//Realiza a divisão entre dois numeros inteiros
	resultado = inteiro1 / inteiro2;
	
	//Mostra o resultado da divisão no monitor / saída de dados
	printf("O resultado da divisao do primeiro numero inteiro pelo segundo e:\n %d", resultado);
	
	return 0;
}
