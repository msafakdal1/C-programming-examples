#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tahmin;
    int number;
    int y;

    srand(time(NULL));

    while(y!=0){
        printf("Aklınızdan bir sayı tutunuz:");     scanf("%d",&number);

        tahmin = 1+rand()%4;

        if(tahmin == number){
            printf("Harika bildiniz:\n");
        }
        else{
            printf("Maalesef bilemediniz\n");
            if(number>tahmin){
                printf("Sayı büyük , tahmini artır\n");
            }
            else{
                printf("Sayı kucuk Tahmini azalt\n");
            }
        }

        printf("Oyundan Çıkmak ister misiniz(y or n)\n");         scanf("%d",&y);

    }
    printf("Oyun Bitti");

    return 0;
}
