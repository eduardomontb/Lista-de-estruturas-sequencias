#include <stdio.h> //

int main(){
	
	//Declara��o de vari�veis
	int numero1;
	int numero2;
	int soma = 0;
	
	//Entrada de dados
	printf("entre com o primeiro numero\n");
	scanf("%d", &numero1);
	
	printf("entre com o segundo numero\n");
	scanf("%d", &numero2);
	
	//Realiza a soma dos dois n�meros inteiros
	soma = numero1 + numero2;
	
	///Mostra o resultado da soma no monitor / sa�da de dados
	printf("resultado: %d", soma);
	
	return 0;
	
}
