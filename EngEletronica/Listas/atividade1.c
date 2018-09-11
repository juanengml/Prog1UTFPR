#include <stdio.h>
#include <math.h>

int main()
{
	float TempC, TempF, TempK;
	printf("Digite a temperatura: ");
    scanf("%f",&TempC);

    TempF= (TempC*1.8)+32;
    printf("Temperatura em Fahrenheit:  %f\n",TempF);

    TempK=(TempF+459.67)/1.8;
    printf("/nTemperatura em Kelvin: %f\n",TempK);

		return 0;
}