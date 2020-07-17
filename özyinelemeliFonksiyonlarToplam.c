#include <stdio.h>

int toplam(int);

int main(){
    int x;

    scanf("%d",&x);

    printf("%d",toplam(x));
}
int toplam(int a){
    if(a==0)    return 0;
    else{
        return a+toplam(a-1);
    }
}
