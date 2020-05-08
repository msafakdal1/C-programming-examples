#include <stdio.h>

int main()
{
    int matris1[5][3]={{1,2,3},{5,6,7},{1,5,3},{7,8,1},{9,8,12}};
    int matris2[5][3]={{4,5,3},{6,4,2},{2,4,6},{9,8,5},{4,5,1}};
    int toplam[5][3];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            toplam[i][j]=matris1[i][j] + matris2[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%5d",toplam[i][j]);
        }
        printf("\n");
    }
    return 0;

}
