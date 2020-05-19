#include <stdio.h>

struct Adresdefteri{
    char isim[20];
    char soyad[20];
    int telno;
    char adres[100];
    int postakodu;
};
int main()
{
    int N;
    char satır;

    printf("Kaç elemanlı olsun:");       scanf("%d",&N);


    struct Adresdefteri bilgi[N];

    scanf("%c",&satır);

    for(int i=0;i<N;i++){

        printf("İsim giriniz:");        gets(bilgi[i].isim);
        scanf("%c",&satır);
        printf("Soyad giriniz:");       gets(bilgi[i].soyad);
        scanf("%c",&satır);
        printf("Tel no giriniz:");      scanf("%d",&bilgi[i].telno);
        scanf("%c",&satır);
        printf("Adres giriniz:");         gets(bilgi[i].adres);
                                            scanf("%c",&satır);
        printf("Posta kodunu giriniz:");   scanf("%d",&bilgi[i].postakodu);
        scanf("%c",&satır);
    }

    for(int i=0;i<N;i++){
        printf("İsim:%s\n",bilgi[i].isim);
        printf("Soyad:%s\n",bilgi[i].soyad);
        printf("Telno:%d\n",bilgi[i].telno);
        printf("Adres:%s\n",bilgi[i].adres);
        printf("PostaKodu:%d",bilgi[i].postakodu);
    }
    return 0;
}
