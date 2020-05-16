#include <stdio.h>

int main(){

    int matris1[2][3]={{2,3,4},{2,6,5}};
    int matris2[3][3] ={{6,6,2},{1,2,3},{4,2,1}};
    int carpım[2][3];
    int toplam=0;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                toplam+=matris1[i][k] * matris2[k][j];
            }
            carpım[i][j] = toplam;
            toplam=0;
        }

    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf(" %d ",carpım[i][j]);
        }
        printf("\n");
    }
    return 0;

}


