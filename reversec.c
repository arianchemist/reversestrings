#include <stdio.h>

int main()
{
    char lde[8];
    char lde1[8];
    char lde2[8];
    char lde3[8];
    char lde4[8];
    for (int rrdef = 0 ; rrdef < 8 ; rrdef++)
    {
        puts("1 member >   ");
        gets(lde[rrdef]);
        puts("2 member >   ");
        gets(lde1[rrdef]);
        puts("3 member >   ");
        gets(lde2[rrdef]);
        puts("4 member >   ");
        gets(lde3[rrdef]);
        puts("5 member >   ");
        gets(lde4[rrdef]);
    }
    printf("normal string >>>  " , lde[8] , lde1[8] , lde2[8] , lde3[8] , lde4[8]);
    printf("reverse string >>>  " , lde4[8] , lde3[8] , lde2[8] , lde1[8] , lde[8]);
    return 0;
}
