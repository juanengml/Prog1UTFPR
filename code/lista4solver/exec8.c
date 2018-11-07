/****
 8) Faça um programa que receba os três coeficientes de uma equação de segundo grau (a, b, c) e determine as raízes. 
Considere o caso em que o delta de Bhaskara é negativo.
****/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float main()
{
 float a,b,c,x1,x2;
 float d;

 printf("a: ");
 scanf("%f",&a);
 printf("b: ");
 scanf("%f",&b);
 printf("c: ");
 scanf("%f",&c);

 d = pow(b,2) -4 * a * c;

 if (d < 0){
 	printf("Raiz delta Nevativo\n");
 }else{
 	printf("Raiz delta Positivo: %f\n",d);
    x1 = (-b + sqrt(d))  / (2*a);
    x2 = (-b - sqrt(d)) / (2*a);
    printf("delta:%f \nx1: %f  \nx2: %f\n",d,x1,x2);
 }
 
 return 0;
}

