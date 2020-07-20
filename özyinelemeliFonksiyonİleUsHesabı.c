#include <stdio.h>


int usluSayı(int , int);

int main()
{
    int taban , us;

    scanf("%d%d",&taban,&us);

    printf("%d ussu %d :%d",taban,us,usluSayı(taban,us));

}
int usluSayı(int base , int exponent){
    if(exponent == 1 || exponent == 0){
        return base;
    }
    else{
        return  base * usluSayı(base,exponent-1);
    }
}
