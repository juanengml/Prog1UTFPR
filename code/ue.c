
#include <stdio.h>

int main(){
  int i, j;

  int v[] = {6, 7, 1, 2, 1, 3};

  for ( i = 0; i < 6 ; i++)
    {
    for ( j = 0 ; j < 6 - 1 ; j++)
    {
      if (v[j] > v[j + 1])
          {
            v[j] = v[j] ^ v[j + 1];

            v[j + 1] = v[j + 1] ^ v[j];

            v[j] = v[j] ^ v[j + 1];
         }
    }
 }
  for (i = 0; i < 6 ; i ++){

        printf("%d \n",v[i]);

 }

  printf("\n");

 return 0;
}
