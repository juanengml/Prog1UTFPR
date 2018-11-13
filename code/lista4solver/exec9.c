/***

9) Independente de considerações de precedência, porque as declarações 
“a = a++” e 
“i++ + ++i” são de comportamento indefinido?

***/
#include <stdio.h>
#include <stdlib.h>

int main(){
 int a;
 int i;
 
 a = a++;

 printf("a: %d\n", ++a);
 printf("i: %d\n",i++);
 printf("i: %d\n",++i);
 return 0;
}
