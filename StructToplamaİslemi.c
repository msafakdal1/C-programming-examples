#include <stdio.h>

typedef struct toplam{
    int a;
    int b;
}Add;

void Adder(Add x,Add y){
    Add Toplama;

    Add kontrol;

    kontrol.a = x.a;
    kontrol.b = y.b;

    printf("Toplam:%d",kontrol.a+kontrol.b);
}
int main()
{
    Add k1,k2;

    printf("k1 sayısını giriniz:");         scanf("%d",&k1.a);
    printf("k2 sayısını giriniz:");         scanf("%d",&k2.b);

    Adder(k1,k2);

    return 0;
}
