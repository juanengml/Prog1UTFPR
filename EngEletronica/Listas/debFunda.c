#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// trocar os printf por "return 1 ou 0"
int Verifica_Numero_Primo(int N){
    int i, k = 0;
    if (N == 1) // return 1
        printf("\n\tNumero %d é primo TEST 1", N); // return 1
    if (N < 1)
        printf("\n\nNumero %d não é primo TEST 1",N);// return 0;
    else{
        for (i =1; i <= N/2; i ++){
            if (N % i == 0)
                k++;
        }
     return k;
     }
     }

int Verifica_Quantidade_Divisoes (int N, int k){//trocar void por int
    Verifica_Numero_Primo(N);
    if (k>2)
        printf("\n O número %d não é primo TEST 2!", N);//return 0;
    else
        printf("\nO número %d é primo TEST 2!", N);//return 1;

    return 0;
}

int Verifica_Primo_Superticioso(int N, int k){//trocar void por int pra retornar
    int a, b, i;
    char numero [100000];

    a = Verifica_Numero_Primo(N);
    if (N > 1)
    b = Verifica_Quantidade_Divisoes(N,k);
    // chama a e b para testar por ultimo, c
    while (i >= 0){
    i = strlen(numero)-1;
    if(numero[i] == '7')
        printf("\n\n\n Numero %s é primo", numero);
    }

    //if (N != 1 && N > 0 )

    return 0;
        // rodar contagem pra verificar ultimo digito
}
int main(){
    int N,k;
    char numero[100000];

    printf("Digite um numero inteiro e positivo: \n");
    scanf("%d",&N);
    sprintf(numero,"%d",&N);

    if(N <= 0)
        printf("\nNumero %d Invalido, Insira outro numero inteiro",N);
    Verifica_Primo_Superticioso(N,k);

  return 0;
}
/*
    int verifica(char value[100]){
    int i;
    while ( i >= 0 ){
        i = strlen(value)-1;
        printf("%c\n", value[i]);
        if (value[i] == '7'){
        printf("gata primo");
        return 1;
        break;
        }
     else
        {
        	return 0;
        	break;
        }

       i--;
    }

}


int main(void)
{
    char name[100];
    int  quant=0;
    int i;
    printf("value: ");
    scanf("%s", name);
    printf("Value is => %s", name);
    printf("\nLEN string => %d\n", strlen(name));
    i = verifica(name);
    printf("Valor verificado => %d\n", i );
    return 0;
}


int contaDigitos = 0, valor, k=0;
        printf("Insira:\t");
        scanf("%d", &valor);
        if (valor == 0) contaDigitos = 1;
        else
            while (valor != 0)
            {
                contaDigitos = contaDigitos + 1;
                valor = valor / 10;
            }
       printf("%d\n", contaDigitos);
       }
       return 0;
   }
*/

