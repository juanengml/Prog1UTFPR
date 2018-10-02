/*****
3) Faça um programa que leia um valor inteiro de até 4 algarismos e calcule a soma dos 
algarismos desse número.
Caso o valor informado seja maior que 4 algarismos, emita 
um erro.
Exemplo:
Informe um nú
mero:
3267
Soma dos algarismos do número:
18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char valor[20];
	int soma;
	int i[3];
	4;
	int aux,aux1,aux2,aux3;
	printf("Valor: ");
	scanf("%s",valor);
	if (strlen (valor) == 4){
		    soma   = valor[0] - '0' + valor[1] - '0' + valor[2] - '0' + valor[3] - '0';
		    
		    printf("Valor de soma algarismos: %d\n",soma);	

	}else{
		printf("Valor deferente\n");
	}
	
   	
	return 0;
}
