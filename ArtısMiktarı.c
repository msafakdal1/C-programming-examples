#include <stdio.h>


int main()
{
    int son_terim,ilk_terim,artıs_miktarı;

    printf("son terim:");       scanf("%d",&son_terim);
    printf("ilk terim:");       scanf("%d",&ilk_terim);
    printf("artıs miktarı:");   scanf("%d",&artıs_miktarı);


    int eleman_sayısı,elemanlar_toplam;

    eleman_sayısı = ((son_terim-ilk_terim)/artıs_miktarı+1);

    elemanlar_toplam = ((son_terim+ilk_terim)*eleman_sayısı/2);

    printf("Eleman_Sayısı = %lf\n\n",(float)(eleman_sayısı));
    printf("Eleman_topla = %lf",(float)(elemanlar_toplam));

    return 0;

}
