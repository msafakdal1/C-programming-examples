#include <stdio.h>

int main()
{
    int sayı;
    int toplam = 0;

    scanf("%d",&sayı);


    for(int i=1;i<sayı;++i){
        if(sayı%i==0){
            toplam+=i;
        }
    }
    if(toplam == sayı){
        printf("Mukemmel sayıdır");
    }
    return 0;
}
