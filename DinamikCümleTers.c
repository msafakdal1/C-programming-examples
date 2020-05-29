#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char  *p = (char *)malloc(10*sizeof(char));

    printf("İsminizi giriniz:");          gets(p);


    printf("*****İsminizin tersi*****\n");

    for(int i=strlen(p)-1;i>=0;i--){

        printf("\n%c",*(p+i));
    }
    free(p);

    return 0;
}
