#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 10

int main(){

    setlocale(LC_ALL,"turkish");

    int dizi[N];
    int toplam=0;
    int ortalama;
    int toplam2=0;
    double sapma;

    printf("\nStandart Sapması hesaplanacak veri kümesini giriniz:\n\n");

    for(int i=0;i<N;i++){
        printf("%d. eleman:",i+1);          scanf("%d",&dizi[i]);
    }
    for(int i=0;i<N;i++){
        toplam+=dizi[i];
        ortalama = toplam/N;
    }
    printf("Dizi elemanlarının aritmetik ortalaması\n\n");
    printf("Ortalama:%lf\n\n",(double)ortalama);

    for(int i=0;i<N;i++){
        toplam2+=((dizi[i]-ortalama) * (dizi[i]-ortalama));
    }
    printf("Her elemandan aritmetik ortalama çıkarıldığı zaman\n\n");
    printf("Toplam2:%d\n\n",toplam2);

    sapma = sqrt(toplam2/N);

    printf("Standart Sapma:%lf",sapma);

    return 0;

}

