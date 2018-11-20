#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**********
Crie uma struct palavra para armazenar um texto de no máximo 100 bytes,
quantidade de vogais e quantidade de consoantes. Crie um programa com uma 
função leArquivo para ler palavras de um arquivo e preencher o vetor, alocado 
dinamicamente, com entradas da estrutura Palavra, e também com uma função para exibir
as contagens de vogais e consoantes.

struct palavra * leArquivo(const char * arquivo);

void imprimePalavras(const struct palavra * palavras, int tamanho);
**********/


struct Palavra {
	char texto[100];
	int quantidade_vogais;
	int quantidade_consoantes;
};

struct Palavra * lerArquivo(const char * arquivo){
 struct Palavra *p = malloc(sizeof(struct Palavra));
 p->quantidade_vogais = 0;
 p->quantidade_consoantes = 0;
 int i;
 
 FILE * fp = fopen(arquivo, "r");
 

 fgets(p->texto, sizeof(p->texto), fp);
 //fscanf(fp,"%s",palavra)




 int tamanho = strlen(p->texto);
 for (i = 0; i < tamanho; i++){
 	if (p->texto[i] == 'a' || p->texto[i] == 'e' || p->texto[i] == 'i' || p->texto[i] == 'o' || p->texto[i] == 'u')
 	{    
 		 //printf("%d\n", p->quantidade_vogais);
 		 p->quantidade_vogais = p->quantidade_vogais + 1;
 	}else{
 		// printf("%d\n", p->quantidade_consoantes);
 		 p->quantidade_consoantes = p->quantidade_consoantes + 1;
 	} 
  }
 fclose(fp);
 return p;
}

void imprimePalavras(const struct Palavra * palavras, int tamanho){
  
  printf("%s\n", palavras);
  printf("%d\n", tamanho);

}

int main()
{
  struct Palavra *a;
  a = lerArquivo("arquivo.txt");
  printf("Vogais: %d\n",a->quantidade_vogais);
  printf("Consoantes: %d\n",a->quantidade_consoantes);
  
  imprimePalavras(a->texto,strlen(a->texto));  


  
   
	return 0;
}