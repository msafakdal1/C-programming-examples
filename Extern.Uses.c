#include <stdio.h>

int number1 = 2;

int main()
{
    extern double number2;

    printf("%d\n",number1); 
    printf("%.lf",number2);
}

double number2 = 40.20;

