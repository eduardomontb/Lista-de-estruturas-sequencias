#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // Imprime o 1� e o 3� argumento na mesma linha
	printf("%s %s\n", argv[1], argv[3]);
	
	// Imprime o 2� argumento sozinho na linha de baixo
    printf("%s\n", argv[2]);

    return 0;
}
