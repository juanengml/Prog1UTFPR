#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
 char str[999];
 int conta = 0;
 int i = 1;
 int j;
 FILE * fp;
 fp = fopen("pontos.txt", "r");
 if (fp) {
        while (fscanf(fp, "%s", str)!=EOF){
           for (j = 0; j < strlen(str); j++){
                if (str[j] == ','){
                 conta = conta + 1;
                 printf("Ponto Numero %d [%s]\n",i,str);
                }
               }
            i++;
            }
         }   

         fclose(fp);

   printf("Total de Pontos {#_#} -> %d ",conta); 
   return 0;

}
