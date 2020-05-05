#include <stdio.h>

int main()
{
    int x,y;
    int toplama,cıkarma,carpma,bolme,mod;

    printf("x sayısını giriniz:");      scanf("%d",&x);
    printf("y sayısını giriniz:");      scanf("%d",&y);

    toplama= x+y;
    cıkarma = x-y;
    carpma = x*y;
    bolme = x/y;
    mod = x%y;

    printf("Toplama:%d\n\nCıkama:%d\n\nCarpma:%d\n\nBolme:%d\n\nmod:%d",toplama,cıkarma,carpma,bolme,mod);

    return 0;
    
}
