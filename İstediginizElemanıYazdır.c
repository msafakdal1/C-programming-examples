#include <stdio.h>

int main()
{
    int dizi[3],kacıncı,i;

    for(i=0;i<3;i++){

        printf("Dizinin %d.elemanını giriniz:",i+1);        scanf("%d",&dizi[i]);
    }

    printf("Kacıncı elemanı istersiniz:");      scanf("%d",&kacıncı);

    printf("istediğiniz eleman:%d",dizi[kacıncı-1]);



    return 0;

}
