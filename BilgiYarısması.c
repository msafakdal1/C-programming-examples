#include <stdio.h>

int main()
{
    char secenek;


    printf("Asagıdakilerden hangisi C programlama Dilinde kosul ifadeleri olusturmaz?");

    printf("\n\n-------A,B,C veya D sıkkından birisini seciniz------\n\nA)if-else\t\tB)switch-case\t\tC)? operatörü\t\tD)pointer");     scanf("%c",&secenek);


    switch (secenek) {

        case 'A': printf("Yanlıs cevap");break;
        case 'B':printf("Yanlıs cevap");break;
        case 'C':printf("Yanlıs cevap");break;
        case 'D':printf("Dogru cevap");break;
        default:printf("Lütfen gecerli bir cevap sıkkı seçiniz:");
    }
    return 0;

}
