/* **********************************************
 * C program to convert Hexadecimal to Decimal	*
 ************************************************/

#include <stdio.h>
#include <math.h>

int main() 
{
 int hex[20], dec, i, j, ch, p;
  
 i = 0;
 p=0;
 dec=0;

 // Read a Hexadecimal value
 printf("Enter a Hexadecimal value : ");
 while ((ch=getchar()) != '\n') {
	 if ((ch > 47 && ch < 58) || (ch > 64 && ch < 71))
		 hex[i++] = ch;
 }

   // Convert Hexadecimal to Decimal
 for (j = i-1; j >= 0; j-- ) {
	 if (hex[j] > 57)
		 dec +=  (hex[j] - 55) * (int)pow((double)16, p);
	 else
		 dec +=  (hex[j] - 48) * (int)pow((double)16, p);
		 
	 p++;
 }

 // Print the hexadecimal value
printf("Decimal value is : %d",dec);


 //Wait for key press
 printf("\n\nPress any key to continue...");
 getchar();
 
 return 0;
}