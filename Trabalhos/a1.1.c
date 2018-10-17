// Escreva um programa que leia duas matrizes 3x3 e apresente na tela o resultado da multiplicação destas matrizes.

#include <stdio.h>

int  main(){
	    int m1[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	    int m2[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	    int resultado[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	    int i = 0;
	    int j = 0;
	    int z = 0;
	    int aux;
	    for (i = 0;i < 3; i++){
	    	for (j = 0; j < 3 ; j++){
	    		printf("m1[%d][%d]: ",i,j);
	    	    scanf("%d",&aux);
	    	    m1[i][j] = aux;

	    	}
	    }

	    for (i = 0;i < 3; i++){
	    	for (j = 0; j < 3 ; j++){
	    		printf("m2[%d][%d]: ",i,j);
	    	    scanf("%d",&aux);
	    	    m2[i][j] = aux;
	    	}
	    }



	    printf("**************** Matriz 1 ************\n");
        for (i = 0;i < 3; i++){
	    	for (j = 0; j < 3 ; j++){
	    		printf(" %d ",m1[i][j]);    	    
	    	}
	    	printf("\n");
	    }

        printf("***************  Matriz 2  **********\n");
        for (i = 0;i < 3; i++){
	    	for (j = 0; j < 3 ; j++){
	    		printf(" %d ",m2[i][j]);    	    
	    	}
	    	printf("\n");
	    }

    
	    for(i = 0; i < 3; i++){
	            for(j = 0; j < 3; j++){
	                    for(z = 0; z < 3; z++){
	                            resultado[i][j] +=  m1[i][z] *  m2[z][j];
	                    }
	            }
	    }
	    printf("******************** FINAL resultado ******\n");
	    for (i = 0 ; i < 3 ; i++){
	    	for (j = 0 ; j < 3 ; j++){
	    		printf("  \t %d",resultado[i][j]);
	    	}
	    	printf("\n");
	    }


	    return 0;

}


 
