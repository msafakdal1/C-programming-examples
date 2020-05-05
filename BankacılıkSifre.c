#include <stdio.h>

int main()
{
    int uyelik,sifre,i;

    printf("Uye numarası:");        scanf("%d",&uyelik);

    if(uyelik==123456){
        for(i=1;i<=3;i++){
            printf("Sifre giriniz:");       scanf("%d",&sifre);

            if(sifre==456432){
                printf("Giriş işleminiz başarıyla gerçekleşti");
                break;
            }
            else
            {
                printf("Sifre yanlıs");
                continue;
            }
            if(i==4){
                printf("3 kere hatalı sifre girdiniz");

            } else
            {
                printf("Yanlış uye numarası girdiniz");
                continue;
            }
        }

    }
    else
    {
        printf("Uye numarası hatalı girdiniz:");


    }

    return 0;


}
