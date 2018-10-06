#include <stdio.h>


int main(){
	float n1,n2,n3;

	printf("n1: ");
	scanf("%f",&n1);
	printf("n2: ");
	scanf("%f",&n2);
	printf("n3: ");
	scanf("%f",&n3);

	if ((n1 + n2) >= n3){
		printf("Maior \n");
    }else{
    	printf("Not Maior\n");
    }


	return 0;
	
}