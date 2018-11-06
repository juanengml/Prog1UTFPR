#include <stdio.h>
#include <stdlib.h>




int main(){
	int i;
	int a,b,c;
	int aux[3];
	printf("a: ");
	scanf("%d",&a);
    aux[0] = a;
	printf("b: ");
	scanf("%d",&b);
    aux[1] = b;
	printf("c: ");
	scanf("%d",&c);	
    aux[2] = c;

	bubble_sort(aux, 3);
	for (i = 0; i < 3; i++)
     printf("%ld\n", array[c]);
 
  return 0;

}


void bubble_sort(long list[], long n)
{
  long c, d, t;
 
  for (c = 0 ; c < n - 1; c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        /* Swapping */
 
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}