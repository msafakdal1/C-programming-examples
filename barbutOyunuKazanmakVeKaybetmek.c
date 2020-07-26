#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BOYUT 20

void galibiyet(int dice1[] , int dice2[] , int sum[] , int size);
void maglubiyet(int sum[] , int size);

int main()
{
    int zar1[BOYUT] , zar2[BOYUT] , toplam[BOYUT];

    srand(time(NULL));

    for(int i=0;i<BOYUT;++i){
        zar1[i] = 1+rand()%6;
    }
    for(int i=0;i<BOYUT;++i){
        zar2[i] = 1+rand()%6;
    }
    for(int i=0;i<BOYUT;++i){
        toplam[i] = zar1[i]  + zar2[i];
    }

    printf("20. turda toplam galibet  ve maglubiyet sayıları\n");
    galibiyet(zar1,zar2,toplam,BOYUT);
    puts("");
    puts("");
    maglubiyet(toplam,BOYUT);
}
void galibiyet(int dice1[] , int dice2[] , int sum[] , int size){
    int galibiyet1 = 0;

    for(int i=0;i<BOYUT;++i){
        if(sum[i] == 7 || sum[i] == 11){
            ++galibiyet1;
        }
        else if(sum[i] == 4 ||sum[i] == 5 || sum[i] == 6 || sum[i] == 8 || sum[i] ==9 || sum[i] == 10){
            if(sum[i+1] == 7 || dice1[i] == 7 || dice2 == 7){
                ++galibiyet1;
            }
        }
    }
    printf("Galibiyet :%d\n",galibiyet1);
    puts("");

}
void maglubiyet(int sum[] , int size){
    int kaybetmek = 0;

    for(int i=0;i<BOYUT;++i){
        if(sum[i] == 2 || sum[i] == 3 || sum[i] == 12){
         ++kaybetmek;
        }
    }
    printf("Maglubiyet Sayısı :%d",kaybetmek);
}
