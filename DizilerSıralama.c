#include <stdio.h>
#define N 5

int main(){
    int dizi[N],gecici;

    for(int i=0;i<N;i++){
        printf("Dizinin %d. elemanını giriniz:",i+1);       scanf("%d",&dizi[i]);
    }
    printf("Sıralama olmadan önce\n");
    for(int i=0;i<N;i++){
        printf("%d\n",dizi[i]);
    }
    printf("Kucukten Buyuge sıralandıktan sonra\n");
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
          if(dizi[j]>dizi[j+1]){
              gecici=dizi[j];
              dizi[j] = dizi[j+1];
              dizi[j+1] = gecici;
          }
      }
    }
    for(int i=0;i<N;i++){
        printf("%d\n",dizi[i]);
    }
    return 0;
}
