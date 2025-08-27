//Crie um programa que receba três nomes quaisquer por meio da linha de execução do programa, e
//os imprima na tela da seguinte maneira: o primeiro e o último nomes serão impressos na primeira linha um após o outro, o outro nome (o segundo) será impresso na segunda linha.
#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Imprime o 1º e o 3º argumento na mesma linha
	printf("%s %s\n", argv[1], argv[3]);
	
	// Imprime o 2º argumento sozinho na linha de baixo
    printf("%s\n", argv[2]);

    return 0;
}
