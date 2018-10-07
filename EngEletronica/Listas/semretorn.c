#include <stdio.h>
#include <stdlib.h>

void get_values(void);


void get_values(void){
	int a,b,c;
	printf("a: ");
	scanf("%d",&a);
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	return 0;
  }

  int soma(void){
  	get_values();
  	return a + b + c;
  }

  int main(){



  	printf("Soma: %d\n", soma(a,b,c));

  	return 0;
  }