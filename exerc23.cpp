//Escreva um algoritmo para trocar os valores de três variáveis A, B e C de modo que A fique com o valor de B, B fique com o valor de C e C fique com o valor de A.
#include<stdio.h>
#include<math.h>

int main(){
	
	//Declaração de variáveis
	int A, B, C, realA;
	
	//Entrada de dados
	printf("Digite o valor de A:\n");
	scanf("%d", &A);
	
	printf("Digite o valor de B:\n");
	scanf("%d", &B);
	
	printf("Digite o valor de C:\n");
	scanf("%d", &C);
	
	//Processamento de cálculos
    //guarda o valor original de A (para não perder ele)
	realA = A;
	//Agora A passa a ser o valor de B
	A = B;
	// B passa a ser o valor de C
	B = C;
	// E C recebe o valor original de A
	C = realA;
	
	//saída de dados
	printf("\nNovos valores:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    
    return 0;
    
}

	
