#include <stdio.h>
#include <math.h>

double kareKok(double);
double ustel(double);
double uslu(double ,double);

int main()
{
    double a , b;

    scanf("%lf%lf",&a,&b);


    printf("%f\n",kareKok(a));
    printf("%f\n",ustel(a));
    printf("%f",uslu(a,b));
}
double kareKok(double  x){
  auto  int sonuc;

    sonuc = sqrt(x);
    return sonuc;
}
double ustel(double x){
    auto double  sonuc;
    sonuc = exp(x);
    return sonuc;
}
double uslu(double x , double y){
    auto double sonuc;

    sonuc = pow(x,y);
    return sonuc;
}

