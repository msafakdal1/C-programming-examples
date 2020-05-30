#include <stdio.h>

void Toplam(int *a,int *b){
    int toplam;

    toplam=*a+(*b);

    printf("Toplam:%d",toplam);
}
void Cıkarma(int *a,int *b){
    int cıkarma;

    cıkarma = *a-(*b);

    printf("Cıkarma:%d",cıkarma);
}
int main()
{
    int x,y;

    printf("x ve y sayılarını giriniz:");           scanf("%d%d",&x,&y);

    printf("%d + %d\n",x,y);

    Toplam(&x,&y);

    printf("\n%d - %d \n",x,y);

    Cıkarma(&x,&y);

}
