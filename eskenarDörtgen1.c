#include <stdio.h>

int main()
{
    for(int i=1;i<=9;i+=2){
        for(int k=1;k<=(9-i)/2;++k){
            printf(" ");
        }
        for(int j=1;j<=i;++j){
            printf("*");
        }
        puts("");
    }
    for(int i=7;i>=1;i-=2){
        for(int k=1;k<=((9-i))/2;++k){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("*");
        }
        puts("");
    }
    return 0;
}
