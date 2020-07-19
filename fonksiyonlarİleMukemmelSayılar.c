#include <stdio.h>

 void perfectNumber();

int main()
{
    perfectNumber();
}
void perfectNumber(){

    int toplam;

    int i , j;
    for(i=1;i<=1000;++i){
        toplam = 0;
        for(j=1;j<i;++j){
            if(i%j==0){
                toplam+=j;
            }
        }
        if(toplam == i){
            for(int k = 1;k<i;++k){
                if(i%k==0){
                    printf("%d için çarpanlar :%d\n",i,k);

                }
            }
        }
    }
}

