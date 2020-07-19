#include <stdio.h>

void asalMı();

int main()
{

    asalMı();
}

void asalMı(){
    int durum;

    for(int i=2;i<=10000;++i){
        durum = 1;
        for(int j=2;j<i;++j){
            if(i%j==0){
                durum = 1;
                break;
            }
            else{
                durum = 0;
            }
        }
        if(durum == 0){
            printf("%d\n",i);
        }
    }
}
