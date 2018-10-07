
#include <stdio.h>
#include <stdlib.h>

void preenche(int L[10][10]);

void preenche(int L[10][10]) { 
   int i, j; 
   for(i=0; i<10; i++) 
      for(j=0; j<10; j++) { 
         
         scanf("%d", &L[i][j]);   
   }
  } 

int main(){
	preenche();
	return 0;
}   