#include<stdio.h>
#include<math.h>

int main(){
	
	//Declara��o de vari�veis
	int A, B, C, realA;
	
	//Entrada de dados
	printf("Digite o valor de A:\n");
	scanf("%d", &A);
	
	printf("Digite o valor de B:\n");
	scanf("%d", &B);
	
	printf("Digite o valor de C:\n");
	scanf("%d", &C);
	
	//Processamento de c�lculos
    //guarda o valor original de A (para n�o perder ele)
	realA = A;
	//Agora A passa a ser o valor de B
	A = B;
	// B passa a ser o valor de C
	B = C;
	// E C recebe o valor original de A
	C = realA;
	
	//sa�da de dados
	printf("\nNovos valores:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    
    return 0;
    
}

	
