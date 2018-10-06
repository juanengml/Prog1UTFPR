#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int valor;
	int i;
	printf("valor:  ");
	scanf("%d",&valor);
	printf("Valor DIgitado: %d\n",valor);
	for (i = 1; i < valor ; i++){
		printf("%d %d\n",i-1,i);

	}
	return 0;
}