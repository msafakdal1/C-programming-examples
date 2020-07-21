#include <stdio.h>

unsigned int mystery(unsigned int a , unsigned int b);

int main()
{
    unsigned int x;
    unsigned int y;

    scanf("%u%u",&x,&y);

    printf("%d",mystery(x,y));
}
unsigned int mystery(unsigned int a , unsigned int b){
    if(b==0){
        return 0;
    }
    else{
        return a + mystery(a,b-1);
    }

}
