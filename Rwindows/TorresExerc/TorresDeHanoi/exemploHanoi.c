#include <stdio.h>
#include "hanoi.h"

int main()
{
    Torre t1 = criaTorreCheia();
    Torre t2 = criaTorreVazia();
    Torre t3 = criaTorreVazia();

    while(1)
    {
        system("cls");

        imprimeTorre(&t1);
        imprimeTorre(&t2);
        imprimeTorre(&t3);

        moveDisco(&t1, &t2);

        getchar();
    }

    return 0;
}
