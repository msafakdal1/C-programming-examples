#include <stdio.h>

int main()
{
    double toplam = 0;
    int ilk = 1;

    for(int i=1;i<=3;++i){
        if(i%2==0){
            toplam += - (double)4/ilk;
        }
        else{
            toplam += (double)4/ilk;
        }
        ilk = ilk + 2;
    }
    printf("Toplam:%lf",toplam);

    return 0;
}
