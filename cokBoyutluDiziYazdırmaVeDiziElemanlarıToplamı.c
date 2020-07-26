#include <stdio.h>
#define BOYUT 3

void cokBoyutluDizi(int array[][BOYUT]);
void toplam(int array[][BOYUT]);

int main()
{
    int dizi[BOYUT-1][BOYUT] = {{1,2,3},{5,6,7}};
    int dizi2[BOYUT-1][BOYUT] = {{10,11,12},{45,67,89}};

    printf("1. matris elemanları\n");
    cokBoyutluDizi(dizi);

   puts("2. matris elemanları\n");

    cokBoyutluDizi(dizi2);

    printf("1. matris elemanları toplamı\n");

    toplam(dizi);

    printf("\n2. matris elemanları toplam\n");

    toplam(dizi2);

    return 0;
}
void cokBoyutluDizi(int array[][BOYUT]){
    for(int i=0;i<BOYUT-1;++i){
        for(int j=0;j<BOYUT;++j){
            printf(" %d ",array[i][j]);
        }
        puts("");
    }
}
void toplam(int array[][BOYUT]){
    int toplam = 0;

    for(int i=0;i<BOYUT-1;++i){
        for(int j=0;j<BOYUT;++j){
            toplam += array[i][j];
        }
    }
    printf("Toplam :%d",toplam);
}
