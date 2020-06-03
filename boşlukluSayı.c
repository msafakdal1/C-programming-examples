#include <stdio.h>



int main()
{
    int sayı;
    int onbinler,binler,yüzler,onlar,birler;
    int gecici;

    printf("Sayı giriniz:");            scanf("%d",&sayı);

    onbinler = sayı/10000;
    gecici = sayı%10000;
    binler = gecici/1000;
    yüzler = (gecici-binler*1000)/100;
    onlar = (gecici-binler*1000-yüzler*100)/10;
    birler =  (gecici-binler*1000-yüzler*100-onlar*10);

    printf("%d   %d   %d   %d   %d",onbinler,binler,yüzler,onlar,birler);

}
