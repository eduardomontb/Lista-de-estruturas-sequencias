#include <stdio.h>
#include <math.h>

int main(){

    //Declara��o de vari�veis
    double diagonal_quadrado, area_quadrado;
    
    //Entrada de dados
    printf("digite o valor da diagonal do quadrado:\n");
    scanf("%lf", &diagonal_quadrado);
    
    //Realiza o c�lculo da area do quadrado usando a diagonal
    area_quadrado = (diagonal_quadrado * diagonal_quadrado) / 2;
    
    //Mostra o resultado do c�lculo no monitor / sa�da de dados 
    printf("A area do quadrado e:\n %.2lf", area_quadrado);
	
	return 0;
	
}
	


















