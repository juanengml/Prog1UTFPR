#include <stdio.h>

int main(){

    int a = 0;

    printf("%d\n", !(a == 7)); //velho
    printf("%d\n",  a != 7 ); // novo

    printf("%d\n",  7 != 7 ); // novo

    printf("%d\n",  (a+7) != 7 ); // novo


    float aa = 0.1, bb = 0.2;

    printf("%f\n", aa+bb == 0.3);

    printf("%f\n", 0.3);
    printf("%f\n", aa+bb);

    printf("%f -> OK \n ",0.3 == aa+bb);//work

    printf("%.18f\n",aa + bb);

    printf("%.18f\n", 0.3 );

    printf("%.18f\n",(aa + bb));

    printf("%.18f\n", 0.3 );

    printf("%.18f\n",(aa + bb) - 0.3);

    return 0;
}
