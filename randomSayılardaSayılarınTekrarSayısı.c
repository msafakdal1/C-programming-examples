#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BOYUT 7

int main()
{
    int sayı;
    int frekans[BOYUT] = {0};

    srand(time(NULL));

    for(int i=1;i<=6000000;++i)
    {
       sayı = 1+rand()%6;
       ++frekans[sayı];
    }
    printf("Sayılar\t\tFrekans\n--------------------\n");


    for(int k=1;k<BOYUT;++k){
        printf("%d\t\t\t%d",k,frekans[k]);
        puts("");
    }
    return 0;
}
