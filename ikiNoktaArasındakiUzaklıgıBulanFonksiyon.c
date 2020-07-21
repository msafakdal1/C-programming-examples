#include <stdio.h>
#include <math.h>


void distance();

int main()
{
    distance();
}
void distance(){
    int x1 , x2 , y1 ,y2;
    double uzaklık;

    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);

    uzaklık = (double)((x2-x1) * (x2-x1) + (y2 - y1)*(y2-y1));

    printf("%f",sqrt(uzaklık));


}

