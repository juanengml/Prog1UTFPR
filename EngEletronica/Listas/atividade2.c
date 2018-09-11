#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float a, b, c, x1, x2, delta, y;

	printf("Digite o termo a:  ");
	scanf("%f",&a);
	printf("Digite o termo b:  ");
	scanf("%f",&b);
	printf("Digite o termo c:  ");
	scanf("%f",&c);
	x1 = (-b+(sqrt(b*b - 4* a * c)))/(2*a);
	x2 = (-b-(sqrt(b*b - 4* a * c)))/(2*a);
	printf("x1:  %f\n",x1);
	printf("x2:  %f\n",x2);

	return 0;
}