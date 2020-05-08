#include <stdio.h>

int main()
{
    int matris[5][5];

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){
                matris[i][j]=1;
            }
            else{
                matris[i][j]=0;
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%4d",matris[i][j]);
        }
        printf("\n");
    }
    return 0;

}
