#include <stdio.h>

int main()
{
    int matris1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matris2[3][3] = {{10,11,12},{20,30,40},{50,60,70}};
    int toplam[3][3];


    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            toplam[i][j] = matris1[i][j]+matris2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%4d",toplam[i][j]);
        }
        printf("\n");
    }
        return 0;


}
