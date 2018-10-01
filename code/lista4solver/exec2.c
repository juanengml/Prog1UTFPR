/** 
2) Suponha que um caixa automático disponha apenas de 
notas de 1, 10 e 50 reais. 
Considerando que alguém está fazendo um saque,
implemente um programa que mostre 
o número mínimo de notas que o caixa deve entregar ao 
cliente. 
Exemplo:
Qual o valor do saque?
72
Você 
receberá
1 nota(s) de R$ 50,00
2 nota(s) de R$ 10,00
2 nota(s) de R$ 1,00
***/

#include <stdio.h>
#include <stdlib.h>

void saque(int entrada){
	int notas50,notas10,notas1,resto50,resto10;
	int saida[] = {0,1,2};
    notas50 = entrada / 50 ;
    resto50 = entrada % 50 ;
    notas10 = resto50 / 10 ;
    resto10 = notas50 % 10 ;
    notas1  = resto50 % 10 ;
    printf("Notas de R$ 50,00 = %d\n",notas50);
    printf("Notas de R$ 10,00 = %d\n",notas10);
    printf("Notas de R$ 1,00 = %d\n",notas1);
    
}

int main(){
	int entrada;
	printf("Digite Valor: ");
	scanf("%d",&entrada);
	saque(entrada);
	return 0;
}
