#include <stdio.h>
#include <math.h>

void mutlakDeger(double a){
    printf("%.lf",fabs(a));
}
int main()
{
    double x;
    printf("x sayısını giriniz:");          scanf("%lf",&x);

    mutlakDeger(x);
}
