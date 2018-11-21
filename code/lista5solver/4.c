/****
4)
Construa um programa que, para um número inteiro e positivo, informe se o mesmo é 
um número primo ou não. Um número é primo se for divisível exatamente apenas por 1 
e por ele mesmo
**/
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int valor;
    int i;
    int resultado = 0;
    int num;
    printf("Valor: ");
    scanf("%d",&valor);
    
    for (i = 2 ; i <= num / 2; i++){
      if (num % 2 == 0){
      	 resultado++;
      	 break;
      }
     }
     if (resultado == 0){
     	printf("primo\n");
     }else{
     	printf("não primo\n");
     }

	return 0;
}