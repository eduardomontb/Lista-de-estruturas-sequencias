#include <stdio.h>

int main(){
	
	//Declara��o de vari�veis
	int nota1, nota2, nota3, soma, media;
	
	//Entrada de dados
	printf("digite a nota da primeira prova\n");
	scanf("%d", &nota1);
	
	printf("digite a nota da segunda prova\n");
	scanf("%d", &nota2);
	
	printf("digite a nota da terceira prova\n");
	scanf("%d", &nota3);
	
	//Realiza a soma entre tr�s n�meros inteiros
	soma = nota1 + nota2 + nota3;
	
	//Realiza o calculo da m�dia dos tr�s n�meros inteiros
	media= ("%d", soma) /3;

    //MOstra o resultado da a m�dia aritm�tica entre essas notas no monitor / sa�da de dados
	printf("resultado: %d", media);
	
	return 0;
	
}
