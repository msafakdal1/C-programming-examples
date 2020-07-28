#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4} , gecici;


    for(int i=0;i<4;++i){
        printf("%d\t",a[i]);
    }

    for(int i=0;i<2;++i){
        gecici = a[i];
        a[i] = a[3-i];
        a[3-i] = gecici;
    }
    puts("");
    puts("");
    for(int i=0;i<4;++i){
        printf("%d\t",a[i]);
    }
}
