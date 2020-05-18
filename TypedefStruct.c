#include <stdio.h>
#include <string.h>

typedef  struct {
    char isimSoyisim[20];
    char meslek[20];
    int maas;
    int yıl;
    char okul[20];
}Tanıtım;


int main()
{
    Tanıtım Brochure;

    strcpy(Brochure.isimSoyisim,"Safak Dal");
    strcpy(Brochure.meslek,"Data Science");
    Brochure.maas = 9000;
    Brochure.yıl = 2024;
    strcpy(Brochure.okul,"College");

    printf("İsim Soyisim:%s\n",Brochure.isimSoyisim);
    printf("Meslek:%s\n",Brochure.meslek);
    printf("Maas:%d\n",Brochure.maas);
    printf("Yıl:%d\n",Brochure.yıl);
    printf("Okul:%s",Brochure.okul);

    return 0;

}
