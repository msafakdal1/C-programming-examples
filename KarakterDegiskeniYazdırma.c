#include <stdio.h>

int main()
{
    char c1,c2,c3,c4,c5;

    printf("1. karakteri giriniz:");        scanf("%c",&c1);
    fflush(stdin);
    printf("2. karakteri giriniz:");        scanf("%c",&c2);
    fflush(stdin);
    printf("3. karakteri giriniz:");        scanf("%c",&c3);
    fflush(stdin);
    printf("4. karakteri giriniz:");        scanf("%c",&c4);
    fflush(stdin);
    printf("5. karakteri giriniz:");        scanf("%c",&c5);


    printf("\nc1:%c\nc2:%c\nc3:%c\nc4:%c\nc5:%c",c1,c2,c3,c4,c5);
    printf("\n\nc1:%c\tc2:%c\tc3:%c\tc4:%c\tc5:%c",c1,c2,c3,c4,c5);
    printf("\n\nc1:%c\tc2:%c\n\nc3:%c\tc4:%c\tc5:%c",c1,c2,c3,c4,c5);

    return 0;



}
