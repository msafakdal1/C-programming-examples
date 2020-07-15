#include <stdio.h>

int main()
{
    int a;

    printf("1 ile 19 arasında bir sayı  giriniz :");     scanf("%d",&a);

    for(int i=1;i<=a;i+=2){
        for(int k=1;k<=(a-i)/2;++k){
            printf(" ");
        }
        for(int j=1;j<=i;++j){
            printf("*");
        }
        puts("");
    }
    for(int i=a;i>=1;i-=2){
        for(int k=1;k<=((a-i))/2;++k){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("*");
        }
        puts("");
    }
    return 0;
}
