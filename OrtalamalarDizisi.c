#include <stdio.h>
#define N 5
int main(){
    int dizi1[N],dizi2[N],yenidizi[N];

    for(int i=0;i<N;i++){
        printf("1. dizinin %d. elemanını giriniz:",i+1);           scanf("%d",&dizi1[i]);
    }
    for(int i=0;i<N;i++){
        printf("2. dizinin %d. elemanını giriniz:",i+1);        scanf("%d",&dizi2[i]);
    }
    printf("1. dizi\n");
    for(int i=0;i<N;i++){
        printf("%d\n",dizi1[i]);
    }
    printf("2. dizi\n");
    
    for(int i=0;i<N;i++){
        printf("%d\n",dizi2[i]);
    }
    for(int i=0;i<N;i++){
        yenidizi[i] = (dizi1[i]+ dizi2[i])/N;
    }
    printf("Yeni Dizi\n");

    for(int i=0;i<N;i++){
        printf("%d\t",yenidizi[i]);
    }
    return 0;
}
