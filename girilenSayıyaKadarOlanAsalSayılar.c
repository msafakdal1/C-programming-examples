#include <stdio.h>

int main()
{
    int a;
    int durum = 1;
    int sayac = 2;
    int sayac2 = 2;

    printf("Sayı giriniz :");           scanf("%d",&a);



    while(sayac<a){
        sayac2 = 2;
        while(sayac2<sayac){
            if(sayac%sayac2 == 0){
                durum = 0;
                break;
            }
            ++sayac2;
        }
        if(durum){
            printf("%d\n",sayac);
        }
        durum = 1;
        ++sayac;
    }
    return 0;
}
