#include <stdio.h>
#include <stdlib.h> 

#define valor ((float)(random())/(float)(RAND_MAX) )


float calculo_Area_Triangulo(float base,float altura){
	return base * altura;
}


int main(){
	srandom(time(NULL)); 
	int i;

    // gera 10 numeros aleatorios
	float x,y;
	for(i=1;i <= 49; i++){
	    x = valor*10;
	    y = valor*10;
		printf("Numero Triangulo: %d\t%.2f\n",i,calculo_Area_Triangulo(x,y));
	}

}