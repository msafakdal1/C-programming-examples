#include <stdio.h>

int DiziToplam(int a[],int x){
    int toplam=0;

    for(int i=0;i<x;i++){
        toplam+=a[i];
    }
    return toplam;
}
int main(){
    int b;

    printf("Kaç elemanlı dizi olsun:");         scanf("%d",&b);

    int y[b];

    for(int i=0;i<b;i++){
        printf("Dizinin %d. elemanını giriniz:",i+1);       scanf("%d",&y[i]);
    }
    printf("Toplam:%d",DiziToplam(y,b));

    return 0;


}
