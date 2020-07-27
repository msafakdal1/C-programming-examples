#include <stdio.h>

int main()
{
    int dizi[3][3] = {{1,2,3},{4,5,6},{7,1,3}} , toplam = 0;

    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            toplam += dizi[i][j];
        }
    }
    printf("%d",toplam);
    
}
