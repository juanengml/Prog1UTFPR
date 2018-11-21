#include <stdio.h>
#include <stdlib.h>


int main(){
	int opcao;
    int move;
	int come;
	int massa;

    printf(" 0 - mamifero  \n 1 - ave\n 2 - reptil \n3 - SAIR\nNumero => ");
    scanf("%d",&opcao);
    if (opcao == 0){
    	printf(" 0 - quadrupede  \n 1 - bipede\n 2 - voa \n 3 - nada\nNumero => ");
        scanf("%d",&move);
        if (move == 0){
        	printf("0 - carnivoro \n1 - herbivoro\nNumero =>" );
        	scanf("%d",&come);
        	switch(come){
        		case 0:
        		printf("leão\n");
        		break;
        		case 1:
        		printf("cavalo\n");
        		break;

        	}
        }

        if (move==1){
        	printf("0 - onivoro \n1 - frutivoro\nNumero => ");
	       	scanf("%d",&come);
	       	switch(come){
	       		case 0:
	       		printf("humano\n");
	       		break;
	       		case 1:
	       		printf("macaco\n");
	       		break;

        	}

        }if (move == 2){
			printf("Morcego\n");
        }if (move == 3){
        	printf("Baleia\n");
        }
    }
    if (opcao ==  1){
    	printf("0 - voa\n1 - nada\n2 - não voa\n \nNumero => ");
    	scanf("%d",&move);
    	switch(move){
    		case 0:
    		  printf("aguia\n");
    		  break;

    		case 1:
    		 printf("pato\n");
    		 break;
    		case 2:
    		 printf("0 - Tropical \n1 - polar\nNumero => ");
    		 scanf("%d",&massa);
    		 if (massa == 0)
    		    printf("Avestruz\n");
    		 if (massa == 1)
    		 	printf("Pinguim\n");
    		 break;
    	}
         
    }
    if (opcao == 2){
    	printf("0 - com casco\n1 - carnivoros\n2 - sem patas\n Numero => ");
        int anda;
        scanf("%d",&anda);
    	switch(anda){
    		case 0:
    		  printf("tartaruga \n");
    		  break;
    		case 1:
    		  printf("crocodilo \n");
    		  break;
    		case 2:
    		  printf("cobra \n");
    		  break;

    	}
    }
    if (opcao == 3){
    	printf("SAIR\n");
    }
    

return 0;
}



 