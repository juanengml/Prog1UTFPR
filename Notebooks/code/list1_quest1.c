#include <stdio.h>
#include <math.h>


int bin_to_dec(int bin)
{
    int total  = 0;
    int potenc = 1;

    while(bin > 0) {
        total += bin % 10 * potenc;
        bin    = bin / 10;
        potenc = potenc * 2;

        fprintf(stderr, "*\n");
    }

    return total;
}


long long oct_to_dec(int oct)
{
    int total = 0, i = 0;

    while(oct != 0)
    {
        total += (oct%10) * pow(8,i);
        ++i;
        oct/=10;
    }

    i = 1;

    return total;
}

int hex_To_Dec(char hexVal[])
{   
    int len = strlen(hexVal);
    int base = 1;
     
    int dec_val = 0;
    for (int i=len-1; i>=0; i--)
    {   

        if (hexVal[i]>='0' && hexVal[i]<='9')
        {
            dec_val += (hexVal[i] - 48)*base;            
            base = base * 16;
        }
        else if (hexVal[i]>='A' && hexVal[i]<='F')
        {
            dec_val += (hexVal[i] - 55)*base;
            base = base*16;
        }
    }
     
    return dec_val;
}

int main(){
	int convert, base;
	int bin = 11011001;
	int dec = 0;
	
	int dec1 = 0;
	int oct = 777;
	
	int hex = 0xFEC;
	int dec2 = 0;

	dec  = bin_to_dec(bin);
    dec1 = oct_to_dec(oct);
    dec2 = hex_To_Dec(hex); 

	printf("BINARIO: %d\n", bin);
	printf("DECIMAL: %d\n", dec);
	printf("-------------------------\n");
    printf("OCTAL: %d\n", oct);
    printf("DECIMAL: %d\n", dec1);
    printf("-------------------------\n");
	printf("HEX: %X \n", hex);
    printf("DECIMAL: %d\n", dec2);
    printf("-------------------------\n");

    printf("HEX: %X \n", hex);
    printf("DECIMAL: %d\n", hex);
    printf("-------------------------\n");

}