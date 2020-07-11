#include <stdio.h>

int main()
{
    int kod;
    double  mudurHaftalıkMaas;
    double saatlikSabit;
    double maas2;
    int saat2;
    double  maas3;
    int satıs3;
    double  maas4;
    double urunFiyatı4;
    int urunAdeti;
    double fiyat3;

    printf("**********Maaş hesaplama uygulamamıza hoşgeldiniz**********");
    puts("");
    printf("Çalışan kodunuzu giriniz :");           scanf("%d",&kod);


    switch (kod) {

        case 1:
            printf("Müdürün haftalık maaşını giriniz :");           scanf("%lf",&mudurHaftalıkMaas);
            printf("Mudur Maası :%lf",mudurHaftalıkMaas); break;
        case 2:
            printf("Saatlik ücretinizi giriniz:");              scanf("%lf",&saatlikSabit);
            printf("Çalışma saatinizi giriniz:");               scanf("%d",&saat2);

            if(saat2<=40){
                maas2 = saat2*saatlikSabit;
            }
            else{
                maas2 = 40 * saatlikSabit + (saat2 - 40) * 0.5;
            }
            printf("%lf",maas2);
            break;
        case 3 :
            printf("Satıs miktarını giriniz :");            scanf("%d",&satıs3);
            printf("Ürün fiyatını giriniz :");              scanf("%lf",&fiyat3);
            maas3 = 250 + satıs3 * fiyat3 * 5.7;
            printf("%lf",maas3); break;
        case 4 :
            printf("Ürün fiyatını giriniz :");              scanf("%lf",&urunFiyatı4);
            printf("Urun adetini giriniz :");               scanf("%d",&urunAdeti);
            maas4 = urunFiyatı4 * urunAdeti;
            printf("%lf",maas4);
            break;

        default:
            printf("Geçerli bir kod girmediniz"); break;
    }
    return 0;
}

