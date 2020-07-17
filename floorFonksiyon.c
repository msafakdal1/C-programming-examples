#include <stdio.h>
#include <math.h>


float Floor(float , float);

int main()
{
    float a , y;


    scanf("%f",&a);

    printf("%f sayısının en yakın küçük değeri %f ' dir",a,Floor(a,y));

}

float Floor(float x , float y){

    y = ceil(x + .5);

    return y;
}
