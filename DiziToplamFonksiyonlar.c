#include <stdio.h>

int DiziToplam(int a[],int b){
    int toplam=0;

    for(int i=0;i<b;i++){
        toplam+=a[i];
    }
    return toplam/(b);
}
int main()
{
    int x;

    printf("Dizinin eleman sayısını giriniz:");             scanf("%d",&x);

    int y[x];

    for(int i=0;i<x;i++){
        printf("Dizinin %d. elemanını giriniz:",i+1);
        scanf("%d",&y[i]);
    }
    for(int i=0;i<x;i++){
      printf("%d\n",y[i]);
    }
    printf("Toplam:%d",(DiziToplam(y,x)));

    return 0;
    
}
