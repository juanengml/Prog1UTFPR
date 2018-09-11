#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	float r,area_circulo,volume_esfera;

    printf("Insira valor de r: ");
    
    scanf("%f",&r);
    
    area_circulo = 3.14 * (r*r);
    
    printf("%f\n", r );

    volume_esfera = ((4) * (3.14) * (r * r * r))/3;
    
	printf("area_circulo: %f\n", area_circulo);
	printf("volume_esfera: %f\n", volume_esfera);

	return 0;
}