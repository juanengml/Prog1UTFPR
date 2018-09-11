#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	float distance_D, distance_S, velocidade_media;
    printf("distance D: ");
    scanf("%f", &distance_D);

    printf("distance S: ");
    scanf("%f", &distance_S);

    velocidade_media = distance_D/distance_S; 

	printf("velocidade_media: %f\n", velocidade_media);
	return 0;
}