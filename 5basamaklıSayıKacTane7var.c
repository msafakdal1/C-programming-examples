#include <stdio.h>


int main() {
    int number;

    int sayac = 0;
    int onbinler, binler , yuzler ,  onlar , birler , gecici;


    printf("Sayı giriniz :");             scanf("%d",&number);


    onbinler = number/10000;
    gecici  = number%10000;
    binler = gecici/1000;
    yuzler = (gecici - binler*1000) / 100;
    onlar  = (gecici - binler*1000 - yuzler * 100) /10;
    birler = (gecici - binler*1000 - yuzler * 100 - onlar * 10) / 1;

    for(int i=1;i<2;++i){
        for(int j=1;j<=i;++j){
            if(onbinler == 7)   ++sayac;
            if(binler == 7)     ++sayac;
            if(yuzler == 7)     ++sayac;
            if(onlar == 7)      ++sayac;
            if(birler == 7)     ++sayac;
            else                break;
        }
    }
    printf("Sayac :%d",sayac);
    return 0;
}
