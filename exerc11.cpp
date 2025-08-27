//Calcular e exibir a área de um quadrado a partir do valor de sua diagonal que será digitado.
#include <stdio.h>
#include <math.h>

int main(){

    //Declaração de variáveis
    double diagonal_quadrado, area_quadrado;
    
    //Entrada de dados
    printf("digite o valor da diagonal do quadrado:\n");
    scanf("%lf", &diagonal_quadrado);
    
    //Realiza o cálculo da area do quadrado usando a diagonal
    area_quadrado = (diagonal_quadrado * diagonal_quadrado) / 2;
    
    //Mostra o resultado do cálculo no monitor / saída de dados 
    printf("A area do quadrado e:\n %.2lf", area_quadrado);
	
	return 0;
	
}
	


















