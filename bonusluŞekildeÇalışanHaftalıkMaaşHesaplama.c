#include <stdio.h>
#define BOYUT 10

int main()
{
    int alacakMaas[BOYUT];

    int dizi[BOYUT] = {402, 440 , 210 , 200 , 289 , 100 , 874 , 845 , 900 , 1000};

    for(int i=0;i<BOYUT;++i){
        if(dizi[i]>=200 && dizi[i]<=299){
            alacakMaas[i] = 200 + dizi[i] * 0.9;
        }
        else if(dizi[i]>=300 && dizi[i]<=399){
            alacakMaas[i] = 200 + dizi[i] * 0.9;
        }
        else if(dizi[i]>=400 && dizi[i]<=499){
            alacakMaas[i] = 200 + dizi[i] *0.9;
        }
        else if(dizi[i]>=500 && dizi[i]<=599){
            alacakMaas[i] = 200 + dizi[i] *0.9;
        }
        else if(dizi[i]>=600 && dizi[i]<=699){
            alacakMaas[i] = 200 + dizi[i] *0.9;
        }
        else if(dizi[i]>=700 && dizi[i]<=799){
            alacakMaas[i] = 200 + dizi[i]*0.9;
        }
        else if(dizi[i]>=800 && dizi[i]<=899){
            alacakMaas[i] = 200 + dizi[i] *0.9;
        }
        else if(dizi[i]>=900 && dizi[i]<=999){
            alacakMaas[i] = 200 + dizi[i] *0.9;
        }
        else{
            alacakMaas[i] = 200 + dizi[i] *0.9;
        }
    }
    for(int j=1;j<BOYUT;++j){
        printf("%d. calısanın alacağı haftalık maas :%f\n",j,(float)alacakMaas[j]);
    }
    return 0;
}
