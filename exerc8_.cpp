#include <stdio.h>
#include <math.h>

int main(){
	
	//Declara��o de vari�veis
    int numero; 
    double raiz_quadrada, elevado_ao_quadrado;
	
	//Entrada de dados
	printf("Digite o numero para saber sua raiz quadrada e sua eleva�ao ao quadrado:\n");
	scanf ("%d", &numero);
	
	//Realiza o c�lculo da raiz quadrada
	raiz_quadrada = sqrt(numero);
	
	//realiza o c�lculo do n�mero elevado ao quadrado
	elevado_ao_quadrado = numero * numero; 
	
	//Mostra o resultado dos calculos no monitor / sa�da de dados
	printf("A Raiz quadrado de %d e:\n %.2lf\n", numero, raiz_quadrada);
	
	printf("O quadrado de %d e:\n %.2lf", numero, elevado_ao_quadrado);
	
	return 0;
}
