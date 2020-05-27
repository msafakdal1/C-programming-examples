#include <stdio.h>

int main()
{
    FILE *dosya;
    int harfsayısı=0;
    char karakter;
    char harf;

    dosya  = fopen("girdiler","r");

    if(dosya==NULL){
        printf("Dosya okunamadı");
    }
    else{
        printf("İstediğiniz harf'i giriniz:");      scanf("%c",&harf);

        for(karakter=fgetc(dosya);karakter!=EOF;karakter=fgetc(dosya)){
            if(karakter==harf){
                harfsayısı++;
            }
        }
        printf("Harf sayısı:%d",harfsayısı);
    }
    fclose(dosya);
    return 0;
}
