#include <stdio.h>
#include "hanoi.h"

int statusTorres();


int main()
{
    Torre t1 = criaTorreCheia();
    Torre t2 = criaTorreVazia();
    Torre t3 = criaTorreVazia();

   statusTorres();
   moveDisco(&t1, &t2);

   statusTorres();
   moveDisco(&t1, &t3);



    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t2, &t3);


    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t1, &t2);


    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t3, &t1);


    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t3, &t2);


    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t3, &t2);


    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t1, &t2);

    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t1, &t3);


    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t2, &t3);



    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t2, &t1);




    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t3, &t1);




    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t2, &t3);



    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t1, &t2);



    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t1, &t3);



    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
    moveDisco(&t2, &t3);


    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();

    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();


   return 0;
}


int statusTorres(){
    system("cls");
    imprimeTorre(&t1);
    imprimeTorre(&t2);
    imprimeTorre(&t3);
    getchar();
}

