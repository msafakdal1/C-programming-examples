#include <stdio.h>
#include <unistd.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"turkish");

    int kod,fiyat,sonFiyat;

    printf("*****Vergi ile birlikte ürün fiyatı hesaplama uygulamasına hoşgeldiniz*****\n\n0-Kitap\n1-Temel Gıda\n2-Lüks Ürün\n\nYukarıdaki ürünlerden birisini lütfen seçiniz:");
    scanf("%d",&kod);

    sleep(2);

    switch(kod){
        case 0 :printf("Kitap fiyatını giriniz:");      scanf("%d",&fiyat);
            sonFiyat = fiyat + fiyat*0.04;
                printf("Son fiyat:%lf",(double)sonFiyat);       break;

        case 1:
            printf("Temel gıda fiyatını giriniz:");     scanf("%d",&fiyat);
            sonFiyat = fiyat + fiyat*0.056;
            printf("Son fiyat:%lf",(double)sonFiyat);   break;

        case 2:
            printf("Lüks ürün gammı fiyatını giriniz:");        scanf("%d",&fiyat);

            sonFiyat = fiyat + fiyat*0.196;
            printf("Son fiyat:%lf",(double)sonFiyat);       break;

        default:printf("Geçerli bir ürün giriniz:");
    }
    return 0;

}
