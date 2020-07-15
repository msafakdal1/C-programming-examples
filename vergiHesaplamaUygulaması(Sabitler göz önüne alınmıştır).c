#include <stdio.h>

int main()
{
    double  emlak , yiyecek , giyim , ulasım , saglık ,tatil;
    double vergi;

    printf("Emlak  harcamanızı giriniz :");     scanf("%lf",&emlak);
    printf("Yiyecek  harcamanızı giriniz :");     scanf("%lf",&yiyecek);
    printf("Giyim  harcamanızı giriniz :");     scanf("%lf",&giyim);
    printf("Ulasım  harcamanızı giriniz :");     scanf("%lf",&ulasım);
    printf("Saglık  harcamanızı giriniz :");     scanf("%lf",&saglık);
    printf("Tatil  harcamanızı giriniz :");     scanf("%lf",&tatil);

    vergi = emlak*0.3 + yiyecek + 0.3 + giyim*0.3 + ulasım *0.3 + saglık *0.3 + tatil *0.3;

    printf("Bugün ki vergi toplamı :%lf",vergi);

    return 0;

}
