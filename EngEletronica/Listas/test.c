#include <stdio.h>
#include <stdlib.h>

/* as funções rand(), random() e srand() estão no cabeçalho stdlib.h */


float calculo_Area_Triangulo(float base,float altura){
	return base * altura;
}

void main(){
	int i;
	for (i = 0; i < 49; i++){
		float base = valores();
		float altura = valores();
		printf("%d\n",i);
		printf("Base: %.2f\n", base);
		printf("Altura: %.2f\n", altura);
		printf("Area: %.2f\n", calculo_Area_Triangulo(base,altura));
		//system("sleep 1");
	}
}
