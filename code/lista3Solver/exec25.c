#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int valor,complemento;
	printf("Valor de entrada: \n");
	scanf("%d",&valor);
	complemento = pow(2,valor); 
	printf("Valor: %d\n",valor);
	printf("complemento: %d\n", complemento-1);
	return 0;
}