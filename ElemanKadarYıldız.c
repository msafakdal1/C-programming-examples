#include <stdio.h>
#define N 10

int main() {

    int dizi[N] = {1, 5, 20, 15, 3, 7, 12, 5, 2, 9};
    int j;


    for(int i=0;i<N;i++){
        printf("%d. için %d tane yıldız:",i+1,dizi[i]);
        for(j=0;j<dizi[i];j++){
            printf("*");
        }
        printf("\n");
    }
        return 0;
}
