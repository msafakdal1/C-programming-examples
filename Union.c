#include <stdio.h>
#define PI 3

typedef  union {
    double alan;
    double cevre;
    double r;

}Toplam;

int main()
{
     Toplam alancevre;

    printf("Yarıcapı giriniz:");        scanf("%lf",&alancevre.r);


    alancevre.alan = PI*alancevre.r*alancevre.r;
    alancevre.cevre = 2*PI*alancevre.r;

    printf("Alan:%2lf",alancevre.alan);
    printf("\nCevre:%2lf",alancevre.cevre);

    return 0;

}
