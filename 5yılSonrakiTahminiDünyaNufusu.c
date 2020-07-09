#include <stdio.h>


int main() {
    double   suanNufus = 7796820410;
    double yıllıkArtıs = 73096598;
    int yıl = 1;
    int sayac = 1;

    while(sayac<=5){
        suanNufus += (double)yıllıkArtıs * yıl;
        printf("%d. yıl sonraki tahmini  dünya  nufusu :%lf \n",sayac,suanNufus);
        ++sayac;
    }
    return 0;
}
