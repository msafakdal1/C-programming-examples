#include <stdio.h>
#include <locale.h>
#define N 5

int main(){

    setlocale(LC_ALL,"turkish");

    int dizi1[N],dizi2[N];
    int kontrol=0;

    for(int i=0;i<N;i++){
        printf("%d. eleman:",i+1);      scanf("%d",&dizi1[i]);
    }
    printf("\n1. dizi elemanları\n");

    for(int i=0;i<N;i++){
        printf(" %d ",dizi1[i]);
    }
    for(int i=0;i<N;i++){
        printf("\n%d. eleman:",i+1);      scanf("%d",&dizi2[i]);
    }
    printf("\n2. dizi elemanları\n");
    for(int i=0;i<N;i++){
        printf(" %d \n",dizi2[i]);
    }
    for(int i=0;i<N;i++){
        if(dizi1[i]==dizi2[i]){
            kontrol=1;
        }
    }
    if(kontrol==1){
        printf("2 dizi aynıdır");
    } else
    {
        printf(" 2 dizi aynı degildir");
    }
    return 0;
}
