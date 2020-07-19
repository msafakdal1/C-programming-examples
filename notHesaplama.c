#include <stdio.h>

void qualityPoints(float);

int main()
{
    float  n;

    printf("N giriniz :");      scanf("%f",&n);

    qualityPoints(n);
}
void qualityPoints(float number){
    float not;
    int  sayac = 1 , toplam = 0;
    float ortalama;

    while(sayac<=number){
        printf("Not giriniz :");        scanf("%f",&not);

        toplam+=not;

        ++sayac;
    }
    ortalama = (float)toplam/sayac;

    if(ortalama>=90 && ortalama<=100){
        printf("4");
    }
    else if(ortalama>=80 && ortalama<=89){
        printf("3");
    }
    else if(ortalama>=70 && ortalama<=79){
        printf("2");
    }
    else if(ortalama>=60 && ortalama<=69){
       printf("1");
    }
    else if(ortalama>=1 && ortalama<=60){
        printf("0");
    }
    else {
        printf("Gecersiz bir ortalama");
    }
}
