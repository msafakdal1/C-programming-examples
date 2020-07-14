#include <stdio.h>

int main()
{
    int sayac = 0;

    while(sayac<=10)
    {
        if(sayac != 5  && sayac<=4)
        {
            printf("%d\t",sayac);
        }
        ++sayac;
    }
    return 0;
}
