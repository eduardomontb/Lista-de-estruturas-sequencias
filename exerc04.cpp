//Faça um algoritmo que receba três notas de um aluno, calcule e imprima a média aritmética entre essas notas.
#include <stdio.h>

int main(){
	
	//Declaração de variáveis
	int nota1, nota2, nota3, soma, media;
	
	//Entrada de dados
	printf("digite a nota da primeira prova\n");
	scanf("%d", &nota1);
	
	printf("digite a nota da segunda prova\n");
	scanf("%d", &nota2);
	
	printf("digite a nota da terceira prova\n");
	scanf("%d", &nota3);
	
	//Realiza a soma entre três números inteiros
	soma = nota1 + nota2 + nota3;
	
	//Realiza o calculo da média dos três números inteiros
	media= ("%d", soma) /3;

    //MOstra o resultado da a média aritmética entre essas notas no monitor / saída de dados
	printf("resultado: %d", media);
	
	return 0;
	
}
