#include <stdio.h>

int main()
{
    int renk;
    int raf_sayısı,tutar;

    printf("Aşağıda raf renklerin sadece 3 'unu seçebilirsiniz.\n\n1-Kırmızı\n2-Mavi\n3-Yesil\n\nLütfen bir renk kodu seçiniz:");    scanf("%d",&renk);


    switch (renk) {

        case 1: printf("Lütfen toplam raf sayısını giriniz:");      scanf("%d",&raf_sayısı);
        tutar = 200+raf_sayısı*30;

        printf("Toplam Tutar:%d",tutar);        break;

        case 2 : printf("Lütfen toplam raf sayısını giriniz:");     scanf("%d",&raf_sayısı);
        tutar = 200+raf_sayısı*20;
        printf("Toplam Tutar:%d",tutar);                            break;

        case 3 : printf("Lütfen toplam raf sayısını giriniz:");     scanf("%d",&raf_sayısı);
        tutar = 200+raf_sayısı*35;
        printf("Toplam Tutar:%d",tutar);                            break;

        default : printf("Lütfen geçerli bir renk kodu giriniz:");

    }
    return 0;

}
