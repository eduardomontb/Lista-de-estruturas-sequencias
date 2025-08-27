#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Imprime o 1º e o 3º argumento na mesma linha
	printf("%s %s\n", argv[1], argv[3]);
	
	// Imprime o 2º argumento sozinho na linha de baixo
    printf("%s\n", argv[2]);

    return 0;
}
