#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BOYUT 36000
#define FREKANS_ELEMANI 12

void modBulma(int sum[] , int size);


int main()
{
    int zar1[BOYUT] , zar2[BOYUT] ,  toplam[BOYUT];

    for(int i=0;i<BOYUT;++i){
        zar1[i] = 1+rand()%6;
    }
    for(int i=0;i<BOYUT;++i){
        zar2[i] = 1+rand()%6;
    }
    for(int i=0;i<BOYUT;++i){
        toplam[i] = zar1[i] + zar2[i];
    }
    for(int i=0;i<BOYUT;++i){
        printf("%d\t",zar1[i]);
    }
    puts("");
    for(int i=0;i<BOYUT;++i){
        printf("%d\t",zar2[i]);
    }
    puts("");
    for(int i=0;i<BOYUT;++i){
        printf("------");
    }
    puts("");
    for(int i=0;i<BOYUT;++i){
        printf("%d\t",toplam[i]);
    }
    puts("");
    puts("");

    printf("Dizi elemanlarının mod'u\n");
    modBulma(toplam,BOYUT);
}
void modBulma(int sum[] , int size){
    int largest = 0 , mode;
    int frekans[FREKANS_ELEMANI];

    for(int i=1;i<=FREKANS_ELEMANI;++i){
        frekans[i] = 0;
    }
    for(int i=0;i<BOYUT;++i){
        ++frekans[sum[i]];
    }
    for(int i=1;i<=FREKANS_ELEMANI;++i){
        if(frekans[i]>largest){
            largest = frekans[i];
            mode = i;
        }
    }
    printf("Mode :%d ",mode);
}
