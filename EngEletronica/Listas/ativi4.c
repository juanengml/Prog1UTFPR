#include <stdio.h>
#include <math.h>


int main()
{
	float cateto_oposto, cateto_adjascente, hipotenusa;
	float a,b,c;
	printf("Cateto oposto: ");
	scanf("%f",&cateto_oposto);
	a = cateto_oposto * cateto_oposto;

    printf("Cato Adjascente: ");
	scanf("%f",&cateto_adjascente);
	b = cateto_adjascente * cateto_adjascente;

    hipotenusa = sqrt(a + b); 

	printf("Hipotenusa %f\n", hipotenusa);
	return 0;
}