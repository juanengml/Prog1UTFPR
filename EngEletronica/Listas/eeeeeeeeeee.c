# include <stdio.h>

int main(){
    int v1[3] = {1,20,1};
    int v2[3] = {2,3,4};
    int i=0;
    int aux[100];

/**	for (i = 0; i < 3 ; i++)   {
		printf("%d\n", v1[i]);
		printf("%d\n", v2[i]);

	}
*/
    for (i = 0; i < 6 ; i++){
    	aux[i] = v1[i];
    	aux[i+1] = v2[i+1];
    	
    }
   for (i = 0; i < 6 ; i++)   {
		printf("%d\n", aux[i]);

	}
    

	return 0;
}