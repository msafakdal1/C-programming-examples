#include <stdio.h>

int main()
{
    int toplam = 0;

    for(int i=1;i<=10;++i){
        if(i==5){
            i = i+1;
        }
        toplam+=i;
    }
    printf("Toplam :%d",toplam);
    
    return 0;
}
