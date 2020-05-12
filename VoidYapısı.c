#include <stdio.h>

void Toplam(int x,int y){
    int toplam= x+y;

    printf("Toplam:%d\n",toplam);
}
void Cıkarma(int x,int y){
    int cıkarma =  x-y;

    printf("Cıkarma:%d\n",cıkarma);
}
void Carpma(int x,int y){
    int carpma = x*y;

    printf("Carpma:%d\n",carpma);
}
void bolme(int x,int y){
    int bolme = x/y;

    printf("Bolme:%d\n",bolme);

}
int main()
{
    int a,b;

    printf("a ve b sayılarını giriniz:");       scanf("%d%d",&a,&b);


    Toplam(a,b);
    Cıkarma(a,b);
    Carpma(a,b);
    bolme(a,b);

}
