#include <stdio.h>

int main()
{
    int x,artıs_miktarı,ilkeleman;

    printf("Dizinin eleman sayısını giriniz:");     scanf("%d",&x);


    printf("ilk eleman giriniz:");          scanf("%d",&ilkeleman);

    printf("Dizinin artık miktarını giriniz:");         scanf("%d",&artıs_miktarı);

    int dizi[x];

    dizi[0] = ilkeleman;

    for(int i=1;i<x;i++){
        dizi[i] = dizi[i-1] + artıs_miktarı;
    }
    for(int i=0;i<x;i++){
        printf(" %d\n %d",dizi[i],dizi[i+1]);
    }
    return 0;

}
