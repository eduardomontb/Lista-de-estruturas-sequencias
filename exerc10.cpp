#include <stdio.h>
#include <math.h>

int main(){
	
	//Declara��o de vari�veis
	int base_triangulo, altura_triangulo, area_triangulo;
	int lado_quadrado, area_quadrado;
	double raio_circulo, area_circulo;
	double base1_trapezio, base2_trapezio, altura_trapezio, area_trapezio;
    double base_retangulo, altura_retangulo, area_retangulo;
	double maior_diagonal, menor_diagonal, area_losango;
	
	//Entrada de dados
	printf("Digite o valor da base do triangulo:\n");
	scanf("%d", &base_triangulo);
	
	// -- TRI�NGULO --
	printf("Digite o valor da altura do triangulo:\n", altura_triangulo);
	scanf("%d", &altura_triangulo);
	
	// F�rmula da �rea do tri�ngulo
	area_triangulo = (base_triangulo * altura_triangulo) / 2;
	
	//Mostra o resultado do calculo da �rea do tri�ngulo no monitor 
	printf("A area do triangulo e:\n %d\n\n\n", area_triangulo);
	
	// -- QUADRADO --
	printf("Digite o valor do lado do quadrado:\n");
	scanf("%d", &lado_quadrado);
	
	// F�rmula da �rea do quadrado
	area_quadrado = lado_quadrado * lado_quadrado;
	
	//Mostra o resultado do c�lculo da �rea do quadrado no monitor
	printf("A area do quadrado e:\n %d\n\n\n", area_quadrado);
	
	// -- C�RCULO --
	printf("Digite o valor do raio do circulo:\n");
	scanf("%lf", &raio_circulo);
	
	//F�rmula da �rea do c�rculo
	area_circulo =  3.14 * raio_circulo * raio_circulo;
	
	//mostra o resultado do c�lculo da �rea do quadrado no monitor
	printf("A area do circulo e:\n %.2lf\n\n\n", area_circulo);
	
	// -- TRAP�ZIO -- 
	printf("Digite o valor da primeira base do trapezio:\n");
	scanf("%lf", &base1_trapezio);
	
	
	printf("Digite o valor da segunda base do trapezio:\n");
	scanf("%lf", &base2_trapezio);
	
	printf("Digite o valor da altura do trapezio:\n");
	scanf("%lf", &altura_trapezio);
	
	//F�rmula da �rea do trap�zio
	area_trapezio = (base1_trapezio + base2_trapezio) * altura_trapezio / 2;
	
	//Mostra o resultado do c�lculo da �rea do trap�zio no monitor
	printf("A area do trapezio e: %.2lf\n\n\n", area_trapezio);
	
	// -- RETANGULO --
	printf("digite a base do retangulo:\n");
	scanf("%lf", &base_retangulo);
	
	printf("digite a altura do retangulo:\n");
	scanf("%lf", &altura_retangulo);
	
	//F�rmula da �rea do retangulo
	area_retangulo = base_retangulo * altura_retangulo;
	
	//Mostra o resultado do c�lculo da �rea do retangulo no monitor
	printf("A area do retangulo e:\n %.2lf\n\n\n", area_retangulo);
	
	// -- LOSANGO --
	printf("Digite o valor da diagonal maior do losango:\n");
	scanf("%lf", &maior_diagonal);
	
	printf("Digite o valor da diagonal menor do losango:\n");
	scanf("%lf", &menor_diagonal);
	
	//F�rmula da �rea do retangulo
	area_losango = maior_diagonal * menor_diagonal / 2;
	
	//Mostra o resultado do c�lculo da �rea do losango no monitor
	printf("A area do losango e:\n %.2lf\n\n\n", area_losango);
	
	return 0;
		
}
