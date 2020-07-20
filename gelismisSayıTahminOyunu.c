#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int tahmin;
    int number;
    int y;
    int dogruSayisi = 0;
    int yanlısSayısı = 0;
    int tahminSayısı =0;

    srand(time(NULL));

    while(y!=0){
        printf("Aklınızdan bir sayı tutunuz:");     scanf("%d",&number);
        printf("\nBiraz bekleyiniz\n");
        sleep(3);

        tahmin = 1+rand()%4;

        if(tahmin == number){
            printf("Harika bildiniz:\n");

            ++dogruSayisi;
        }
        else{
            printf("Maalesef bilemediniz\n");
            if(number>tahmin){
                printf("Sayı büyük , tahmini artır\n");
            }
            else{
                printf("Sayı kucuk Tahmini azalt\n");
            }
            ++yanlısSayısı;
        }
        ++tahminSayısı;

        if(tahminSayısı<=10 && tahmin == number){
            printf("Evet Dostum Sen bir harikasın\n");
        }
        if(tahminSayısı>=10 && tahmin != number){
            printf("Biraz daha denemelisin\n");
        }

        printf("Oyundan Çıkmak ister misiniz(y or n)\n");         scanf("%d",&y);
    }

    printf("Oyun Bitti");
    
    
    return 0;
}
