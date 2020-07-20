#include <stdio.h>

void gcd(int , int );


int main()
{
    int x , y;

    printf("x ve y giriniz :");     scanf("%d%d",&x,&y);

    gcd(x,y);
}
void gcd(int a , int b){
    int max = 0;
    if(a>b){
        for(int i=1;i<=a;++i){
            if(a%i==0 && b%i==0){
                if(i>max){
                    max = i;
                }
            }
        }

    }
    if(b>a){
        for(int i=1;i<=b;++i){
            if(a%i==0 && b%i==0){
                if(i>max)
                    max = i;
            }
        }
    }
    printf("%d sayısı ile %d sayısının en buyuk ortak boleni :%d",a,b,max);
}
