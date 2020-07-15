#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "turkish");

    int sayac = 1;
    int uyeNumarasi;
    int sifre = 0;

    printf("Uye numarasını giriniz:");
    scanf("%d", &uyeNumarasi);
    if (uyeNumarasi == 12345) {
        while (sayac <= 3) {
            printf("Lütfen sifrenizi giriniz:");
            scanf("%d", &sifre);


            ++sayac;
        }
        if (sifre == 963211) {
            printf("3 kere doğru şifre girdiniz giriş yapıldı");
        }
        else{
            printf("3 kere hatalı şifre girdiniz");
        }
    }
    else{
        printf("Hatalı uye numarası girdiniz tekrar deneyiniz");
    }

}
