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




struct Palavra * lerArquivo(const char * arquivo, int *quantidade_palavras)
{
	//*quantidade_palavras  = contarPalavras(arquivo);
 
	struct Palavra *p = malloc(*quantidade_palavras*sizeof(struct Palavra));
	memset(p, *quantidade_palavras*sizeof(struct Palavra), 0);

	char valor[100]; 
	int i = 0;
	int j;
	FILE * fp = fopen(arquivo, "r");

	while(fscanf(fp,"%s",valor) == 1)
	{
	  	strcpy(&p[i].texto[0], valor);

	  	int tamanho = strlen(valor);
	  	for (j = 0; j < tamanho; j++)
	  	{
   			//printf("%c\n", valor[j]);
		      if (valor[j] == 'a' || valor[j] == 'e' || valor[j] == 'i' || valor[j] == 'o' || valor[j] == 'u')
		      	p[i].quantidade_vogais++;
		      else
		      	p[i].quantidade_consoantes++;
	  	 }

	  	 i++;
  	}
    
	fclose(fp);
	return p;
}

// guto.vha.4@gmail.com

int contarPalavras(const char * arquivo){
  FILE * fp = fopen(arquivo, "r");
  char valor[100];
  int aux = 0;
 
  while(fscanf(fp,"%s",valor) != EOF){aux = aux + 1;}
  
  fclose(fp);
  return aux;
}



void imprimePalavras(const struct Palavra * palavras, int tamanho){
   int i;
   for (i = 0; i < tamanho; i++){
   	 printf("\tTexto: %s\t Vogais: %d\t Consoantes: %d \n", palavras[i].texto,palavras[i].quantidade_vogais,palavras[i].quantidade_consoantes);
   
   }
}

int main()
{
   struct Palavra *a;
   int quantidade_palavras;
   quantidade_palavras = contarPalavras("arquivo.txt");
   a = lerArquivo("arquivo.txt", &quantidade_palavras);
   imprimePalavras(a,quantidade_palavras);  

  return 0;
}