#include<stdio.h>

int main()
{
    int sayi,basamaks;

    printf("Bir sayi giriniz =\n");
    scanf("%d",&sayi);
    basamaks=1;
    do {
        sayi=sayi/10;
        basamaks++;
    }
    while(sayi>=10);
    printf("Basamak sayisi = %d",basamaks);
}
