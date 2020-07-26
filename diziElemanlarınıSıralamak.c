#include <stdio.h>
#define BOYUT 5

int main()
{
    int gecici;

    int array[BOYUT] = {1,4,3,2,0};

    for(int i=1;i<BOYUT;++i){
        for(int j=0;j<BOYUT-1;++j){
            if(array[j]>array[j+1]){
                gecici = array[j];
                array[j] = array[j+1];
                array[j+1] = gecici;
            }
        }
    }
    for(int k=0;k<BOYUT;++k){
        printf("%d\t",array[k]);
    }
    return 0;
}
