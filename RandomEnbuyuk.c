#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomSayı(int a[],int b){

    int enbuyuksayı;

    enbuyuksayı=a[0];

    for(int i=1;i<b;i++){
        if(a[i]>enbuyuksayı){

            enbuyuksayı=a[i];
        }
    }
    return enbuyuksayı;
}
int main(){
    int y;

    printf("Kac karakterli dizi istersiniz:");      scanf("%d",&y);

    int x[y];

    srand(time(NULL));

    for(int i=0;i<y;i++){
        x[i]=1+rand()%5;
        printf("%d\n",x[i]);
    }
    printf("Enbuyuksayı:%d",RandomSayı(x,y));

    return 0;

}
