#include <stdio.h>

int main()
{
    int x;
    int sayac=0;
    int durum =0;

    printf("x sayısını giriniz:");          scanf("%d",&x);

    for(int i=2;i<=x;i++){
        durum=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                durum=1;
                break;
            }
        }
        if(durum==0){
            printf("%d\n",i);
            sayac++;
        }
    }
    printf("%d tane asal sayı vardır",sayac);

    return 0;
}
