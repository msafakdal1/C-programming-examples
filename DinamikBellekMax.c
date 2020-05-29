#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *p;
    int N,i,max;


    printf("Kaç adet sayı yazılmasını istersiniz:");        scanf("%d",&N);

    p=(int * )malloc(N*sizeof(int));

    srand(time(NULL));

    max = *p;

    for(i=0;i<N;i++){
        *(p+i) = 1+rand()%50;

        printf("%d\n",*(p+i));

        if(*(p+i)>max){
            max=*(p+i);
        }
    }
    printf("\n\nMax:%d",max);

    return 0;

}
