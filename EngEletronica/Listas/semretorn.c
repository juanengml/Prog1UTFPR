#include <stdio.h>
#include <stdlib.h>


int soma(int q,int w, int e){
	return (q+w+e);
}

 

void valor(void){
   int a,b,c;
 
   printf("a: ");
   scanf("%d",&a);
   printf("b: ");
   scanf("%d",&b);

   printf("c: ");
   scanf("%d",&c);
   
   printf("Valor de A: %d \n",a);
   printf("Valor de B: %d \n",b);
   printf("Valor de C: %d \n",c);

   return 0;
}

int main(int argc, char const *argv[])
{
	valor();
	return 0;
}