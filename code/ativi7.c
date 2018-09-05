#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float IMC(float peso,float altura);


int main(int argc, char const *argv[])
{
	float peso, altura;
	printf("Peso: ");
	scanf("%f",&peso);

	printf("Altura: ");
	scanf("%f",&altura);

	IMC(peso,altura);

	
	return 0;
}


float IMC(float peso, float altura){
	float valor = 10000 * (peso / (altura * altura));	
	if (valor < 18.5) printf("Abaixo do Peso %.2f\n",valor);
	if (valor >= 18.6 && valor <= 24.9) printf("Pedo ideal (Parabens) %.2f\n",valor);
	if (valor >= 25.0 && valor <= 29.9) printf("Levemente acima do peso %.2f\n",valor);
	if (valor >= 30.0 && valor <= 34.9) printf("Obesidade grau I %.2f\n",valor);
	if (valor >= 35.0 && valor <= 39.9) printf("Obesidade grau II %.2f\n",valor);
	if (valor > 40) printf("Obesidade III ta fudido %.2f\n",valor);
}


