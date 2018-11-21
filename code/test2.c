#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

    char vogais[] = {'a','e','i','o','u'};
    char str[20] = "juan";
    char caracter = '1';
    for(int i =0; i<strlen(str); i++){
        int vogal=0;
        for(int v =0; v<5; v++){
            if(str[i] == vogais[v]) vogal= 1;
        }
        if(vogal == 1){
            str[i] = caracter;
        }
    }
    printf("%s\n",str);
    return 0;
}
