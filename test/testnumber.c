#include <stdio.h>
#include <math.h>
 
int main()
{
    int num;
    float sqrRoot;
    long cube;
     
    printf("Enter any integer number: ");
    scanf("%d",&num);
     
    sqrRoot=sqrt(num);
    cube=pow(num,3);
 
    printf("Number: %d \nSquare Root: %f \nCube: %ld \n",num,sqrRoot,cube);
     
    return 0;
}