#include <stdio.h>

int Toplam(int sayı){
    if(sayı==1){
        return 1;
    } else{
        return sayı+Toplam(sayı-1);
    }
}
int main()
{
    int a;

    printf("a sayısını giriniz:");          scanf("%d",&a);


    printf("Toplam:%d",Toplam(a));

    return 0;

}
