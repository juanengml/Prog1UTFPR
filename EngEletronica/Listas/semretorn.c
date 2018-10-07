#include <stdio.h>
#include <stdlib.h>


int soma(int q,int w, int e){
	printf("SOMA: %d\n",(q+w+e));
}

 

void valor(void){
   int a,b,c;
 
   printf("a: ");
   scanf("%d",&a);
   printf("b: ");
   scanf("%d",&b);

   printf("c: ");
   scanf("%d",&c);
   

   soma(a,b,c);
   return 0;
}

int main(int argc, char const *argv[])
{
	valor();
	return 0;
}