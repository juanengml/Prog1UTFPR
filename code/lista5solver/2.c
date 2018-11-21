#include <stdio.h>
#include <stdlib.h>

int quadro;
float trigo, trigo_total;

int main () {

	quadro = 1;
	trigo = 1;
	trigo_total = trigo;

	while (quadro <= 64) {

		quadro = quadro + 1;
		trigo = trigo * 2;
		trigo_total += trigo;
		printf("quadro: %d \n", quadro);
		printf("trigo: %f \n", trigo);
		printf("trigo-total: %f \n", trigo_total);

	}

}