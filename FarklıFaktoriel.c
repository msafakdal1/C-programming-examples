#include <stdio.h>


int main()
{
    int x;
    int product = 1;

    printf("Enter the x value = ");        scanf("%d",&x);

    int i = 1;

    while(i<=5){
        product*=x++;
        i++;
    }
    printf("Product:%d",product);

    return 0;


}
