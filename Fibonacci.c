#include <stdio.h>

int main()
{
    int ilk=0;
    int ikinci=1;
    int sonraki;
    int x;

    printf("x sayısını giriniz:");      scanf("%d",&x);

    for(int i=1;i<=x;i++){
        sonraki=ilk+ikinci;
        ilk=ikinci;
        ikinci=sonraki;

        printf("%d\n",sonraki);

    }
    return 0;

}
