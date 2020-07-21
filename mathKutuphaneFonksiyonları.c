#include <stdio.h>
#include <math.h>


double  kup(int);//cbrt
double expUs(int); // exponensiyel
double ln(int);  //ln fonksiyonn
double logaritma(int); //log10
double mutlakDeger(int);

int main()
{
    int x;

    scanf("%d",&x);

    double kupKokAlma = (double)kup(x);
    double dogalEsayısı = (double)exp(x);
    double  lnSayısı = (double)ln(x);
    double logFonskiyon = (double)logaritma(x);
    double fMutlakDeger = (double)mutlakDeger(x);

    printf("%f\n%f\n%f\n%f\n%f\n",kupKokAlma,dogalEsayısı,lnSayısı,logFonskiyon,fMutlakDeger);

}
double  kup(int a){
    return cbrt(a);
}
double expUs(int a){
    return exp(a);
}
double ln(int a){
    return log(a);
}
double logaritma(int a){
    return log10(a);
}
double mutlakDeger(int a){
    return fabs(a);
}
