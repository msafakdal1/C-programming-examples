#include <stdio.h>

int main()
{
    int x;

    printf("x sayısını giriniz:");  scanf("%d",&x);

    if(x>0){
        printf("Sayı pozitiftir");
    } else
    {
        printf("Sayı negatiftir");
    }
    return 0;
    
}
