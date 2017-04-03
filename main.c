#include <stdio.h>

int main (void){

	double a, b, c;   //unidades de calculo "a,b,c e pi"
	double pi = 3.14159;
	double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO; //Perguntas do calculo
		
	scanf("%lf %lf %lf", &a, &b, &c);

	TRIANGULO = a * c * 0.5;
	CIRCULO = pi * c * c;
	TRAPEZIO = (a + b) * c *0.5; 
	QUADRADO = b * b;
	RETANGULO = a * b;
	
	printf("TRIANGULO = %.3f\n",TRIANGULO);
	printf("CIRCULO = %.3f\n",CIRCULO);
	printf("TRAPEZIO = %.3f\n",TRAPEZIO);
	printf("QUADRADO = %.3f\n",QUADRADO);
	printf("RETANGULO = %.3f\n",RETANGULO);

return 0;
}
