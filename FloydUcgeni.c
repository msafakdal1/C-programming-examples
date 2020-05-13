#include <stdio.h>

void FloydUcgeni(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main()
{
    int a;

    printf("a sayısını giriniz:");          scanf("%d",&a);

    FloydUcgeni(a);


}
