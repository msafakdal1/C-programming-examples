#include <stdio.h>

void gcd(int , int);

int main()
{
    int a , b;

    scanf("%d%d",&a,&b);


    gcd(a,b);

}
void gcd(int x , int y){
    int buyuk = 0;
    for(int i=1;i<x;++i){
        if(x%i==0 && y%i==0){
            if(i>buyuk){
                buyuk = i;
            }
        }
    }
    printf("Ebok :%d",buyuk);
}
