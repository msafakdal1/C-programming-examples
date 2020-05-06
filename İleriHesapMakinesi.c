#include <stdio.h>
#include <unistd.h>


int main()
{
    int x,y;
    char islem;

    printf("**********Hesap Makinesi Uygulamasına Hoşgeldiniz**********");

    do{
        printf("\n\n1-Toplama\n2-Cıkarma\n3-Carpma\n4-Bolme\n5-Mod\n\nYukarıdaki işlemlemlerden birisini seçiniz:");
        scanf("%c",&islem);
        if(islem=='+'){
            printf("\nx sayısını giriniz:");      scanf("%d",&x);
            printf("y sayısını giriniz:");      scanf("%d",&y);

            printf("Toplama:%d",x+y);
        }
        else if(islem=='-'){
            printf("\nx sayısını giriniz:");      scanf("%d",&x);
            printf("y sayısını giriniz:");      scanf("%d",&y);

            printf("Cıkarma:%d",x-y);
        }
        else if(islem=='*'){
            printf("\nx sayısını giriniz:");      scanf("%d",&x);
            printf("y sayısını giriniz:");      scanf("%d",&y);

            printf("Carpma:%d",x*y);
        }
        else if(islem=='/'){
            printf("\nx sayısını giriniz:");      scanf("%d",&x);
            printf("y sayısını giriniz:");      scanf("%d",&y);

            printf("Bolme:%d",x/y);
        }
        else if(islem=='%'){
            printf("\nx sayısını giriniz:");      scanf("%d",&x);
            printf("y sayısını giriniz:");      scanf("%d",&y);

            printf("Mod:%d",x%y);
        }
        else{
            continue;
        }

    }while(x!=5);

        printf("\nHesap makinesi kapanıyor");

        sleep(2);

        return 0;

}
