#include <iostream>

using namespace std;

int main()
{
    unsigned int sayı;
    unsigned binler,  yuzler , onlar , birler , gecici , result;


    cout<<"Sayı giriniz:";          cin>>sayı;

    binler = sayı/1000;
    gecici = sayı%1000;
    yuzler = gecici/100;
    onlar = (gecici - yuzler*100)/10;
    birler = (gecici - yuzler*100  - onlar*10);

    result = ((birler*1) + (onlar*2) + (yuzler*4) + (binler*8));

    cout<<"Result:"<<result<<endl;

    return 0;

}
