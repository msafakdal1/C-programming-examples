#include <stdio.h>

int main()
{
    int a,b,gecici;

    printf("a ve b sayısını giriniz:");         scanf("%d%d",&a,&b);

    printf("Yerdeğiştirmeden önce a:%d\tb:%d",a,b);

    gecici=b;
    b=a;
    a=gecici;


    printf("\nb:%d\n\na:%d",b,a);
    
    return 0;
    
}
