#include <stdio.h>

int main()
{

    int a;

    printf("Dizinin eleman sayısını giriniz:");         scanf("%d",&a);

    int dizi[a];

    dizi[0] = 1;
    dizi[1] = 1;

    for(int i=0;i<a;i++){

        dizi[i+2] = dizi[i]+dizi[i+1];
    }
    printf("Fibonacci seri\n\n");

    for(int i=0;i<a;i++){

        printf(" %d ",dizi[i]);
    }
    return 0;

}
