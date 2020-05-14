#include <stdio.h>

void KalanBolum(int x,int y){
    int sonuc1,sonuc2;

    sonuc1=x/y;
    sonuc2=x%y;

    printf("Sonuc1: %d\n\n",sonuc1);
    printf("Sonuc2: %.2lf",(double)sonuc2);
}
int main()
{
    int a,b;

    printf("a ve b sayılarını giriniz:");       scanf("%d%d",&a,&b);

    KalanBolum(a,b);


}
