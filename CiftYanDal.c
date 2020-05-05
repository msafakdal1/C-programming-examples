#include <stdio.h>

int main()
{
    int n0,n1,n2,n3;
    double GANO;

    printf("n0,n1,n2ve n3 derslerinin notlarını giriniz:"); scanf("%d%d%d%d",&n0,&n1,&n2,&n3);

    GANO = (n0+n1+n2+n3)/4;


    if(GANO>=2.5 && GANO<=3.0){
        printf("YANDAL");
    }
    else if(GANO>=3.0){
        printf("Hem yandal hemde çift anadal yapabilir");
    } else{
        printf("Ortalam dusuk oldugu icin 2 sinide yapamaz");
    }
    return 0;

}
