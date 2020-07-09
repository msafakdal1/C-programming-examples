#include <stdio.h>


int main() {

    int f = 1;
    int number;
    float  e = 1;
    int i = 1;
    int result = 1;
    int x;
    float  son  = 1;
    int j = 1;

    printf("Number giriniz :");         scanf("%d",&number);
    printf("X sayısını giriniz :");     scanf("%d",&x);

    while(i<=number){
        if(i == 1){
            f = 1;
        }
        else{
            f *= i;
        }
        result *= x;

        e += (float)result/f;

        ++i;
    }
    while(j<=x){
        son *=(float)e;
        ++j;
    }
    printf("Sonuc :%f",son);

    return 0;
}
