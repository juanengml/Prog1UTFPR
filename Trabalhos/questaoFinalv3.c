#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vamos lá
// AUTOR: Ernildo Porfirio
// UFERSA: Engenharia da Computação
// primeiro passo, criar a estrutura:
typedef struct texto Texto;
struct texto{
  char palavra[100];    // string com no mááximo 100 letras
  int qtdVogais,        // aqui vai a quantidade de vogais do seu texto
      qtdConsoantes;    // aqui vai a quantidade de consoantes do seu texto
};


// protóótipos das funções...

// pode futuramente usar o modificador static
int contadorDePalavras(FILE* arq);
int contaAporraDasVogais(char* PALAVRA);
int contaAporraDasConsoantes(char* PALAVRA);

// ---
Texto* lerArquivo(char* nomeDoArquivo, int* t);
void imprimePalavras(Texto* vetorDePalavras, int tamanho);

int main(void) {
  
  int tam; // vai conter o tamanho do vetor
  Texto* vetPalavras = lerArquivo("arquivo.txt", &tam); // criei um arquivo  
  imprimePalavras(vetPalavras, tam);

  free(vetPalavras);

  return 0;
}


// essa função pode ser melhorada. Por hora vou fazer assim mesmo...
int contadorDePalavras(FILE* arq){
    int cont = 0, cont2 = 0;
    char letra;
     // enquanto não chegar o fim do arquivo, continue rodando
    while(fscanf(arq, "%c", &letra) != EOF){  
        /// vou mecher aqui...
        if(letra != ' ' && letra != '\n') cont++;
        else cont2++;

    }
    /// pronto não meche aqui mais kkkkkkkkkkkkkkkkkkkkkkkkkk
    return (cont2 + 1);
}
int contaAporraDasVogais(char* PALAVRA){
    int cont = 0;
    // fica mais lento mas tem problema não. CUIDADO! kkkkk
    for(int i = 0; i < strlen(PALAVRA); i++){
        
        if( (PALAVRA[i] == 'a' ||  PALAVRA[i] == 'A') ||
            (PALAVRA[i] == 'e' ||  PALAVRA[i] == 'E') ||
            (PALAVRA[i] == 'o' ||  PALAVRA[i] == 'O') ||
            (PALAVRA[i] == 'i' ||  PALAVRA[i] == 'I') ||
            (PALAVRA[i] == 'u' ||  PALAVRA[i] == 'U')
        )cont++;
    }
    return cont;

}
int contaAporraDasConsoantes(char* PALAVRA){
    
    return(strlen(PALAVRA) - contaAporraDasVogais(PALAVRA));

}
// implementação das funções...AAAAAAAAAAAAAEEE SHOW MLK !!!

void imprimePalavras(Texto* vetorDePalavras, int tamanho){
    printf("Ao todo contamos %d palavras\n\n", tamanho);
    for(int i =  0; i < tamanho; i++){
        printf("Palavra: %s\n", vetorDePalavras[i].palavra);
        printf("Quantidade de vogais: %d\n", vetorDePalavras[i].qtdVogais);
        printf("Quantidade de consoantes: %d\n", vetorDePalavras[i].qtdConsoantes);
        printf("-----------------------------\n");
    }
}

/// vou mecher um pouco na assinatura dessa função blz chefe

Texto* lerArquivo(char* nomeDoArquivo, int* t){
    // criando um ponteiro para o nosso aquivo de texto
    int quantasPalavrasTem;
    FILE* arq = fopen(nomeDoArquivo, "rt"); // o que rt faz ? 
    Texto* vetorDePalavras = NULL ; // esse seráá o nosso vetor dinâmico...
    // se o sistema encontrou o nosso arquivo, entãão podemos prosseguir suusa 

    if(arq != NULL){
        quantasPalavrasTem = contadorDePalavras(arq);
        // aqui estamos passando o tamho do vetor por indireção
        *t =  quantasPalavrasTem;
        
        vetorDePalavras = (Texto*)malloc(sizeof(Texto) * quantasPalavrasTem);
    }
    fclose(arq); // fechei o arquivo para resetar o cursor. tem uma funçãão para isso mas eu esqueci kkkk..

    arq = fopen(nomeDoArquivo, "rt"); // abrimos novamente
    if(arq != NULL){
        char PALAVRA[100];
        int  incremento = 0;
        // vamos preenchre o vetor
        while(fscanf(arq, "%s", PALAVRA) != EOF){
            // Copia a palavra lida atualmente para a posição atual do vetor kkkk mano 
            strcpy(vetorDePalavras[incremento].palavra, PALAVRA);
            vetorDePalavras[incremento].qtdVogais = contaAporraDasVogais(PALAVRA);
            vetorDePalavras[incremento].qtdConsoantes = contaAporraDasConsoantes(PALAVRA);
            incremento++;
        }
    }
    fclose(arq);

    return vetorDePalavras;
}
///ue sou de 8 meses UEHUEHUEH
// tente agora
// pronto so ajeitar a poha que conta consoantes kkkkkkk
// wtf mano kkkk pq ele continua contando ? 
// pera kkkkkkk
