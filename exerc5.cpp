#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	float nota1, nota2, peso1, peso2, sm, dp;
	
	//Entrada de dados
	printf("digite a primeira nota:\n");
	scanf("%f", &nota1);
	
	printf("digite o peso da primera nota:\n");
	scanf("%f", &peso1);
	
	printf("digite a segunda nota:\n");
	scanf("%f", &nota2);
	
	printf("digite o peso da segunda nota:\n");
	scanf("%f", &peso2);
	
	//Realiza o cálculo da soma ponderada
	sm = (nota1 * peso1) + (nota2 * peso2);
	
	//Realiza o cálculo da média ponderada
	dp = ("%f", sm) / (peso1 + peso2);

    //Mostra o resultado da média ponderada entre as notas no monitor / saída de dados
    printf("a media ponderada e:\n %2f", dp);
    
    return 0;
}
