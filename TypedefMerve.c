#include <stdio.h>
#include <string.h>


typedef struct {
    char isim[10];
    char soyisim[10];
    int yas;
}bilgiler;

int main()
{
     bilgiler inform;

    strcpy(inform.isim,"Merve");
    strcpy(inform.soyisim,"Dal");
    printf("Yasınızı giriniz:");
    scanf("%d",&inform.yas);

    printf("İsim:%s\n",inform.isim);
    printf("Soyisim:%s\n",inform.soyisim);
    printf("Yas:%d\n",inform.yas);


    return 0;
}
