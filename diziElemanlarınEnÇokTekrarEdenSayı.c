#include <stdio.h>
#define BOYUT 6

int main()
{
    int enCokTekrarEdenSayı = 0;
    int dizi[BOYUT] = {2,2,1,4,5,2};

    int frekans[BOYUT] = {0};

    for(int i=0;i<BOYUT;++i){
        ++frekans[dizi[i]];
        enCokTekrarEdenSayı = dizi[i];
    }
    printf("%d",enCokTekrarEdenSayı);
}
