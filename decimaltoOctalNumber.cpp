#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int octalNumber;
    int decimalNumber=0;
    int i = 0;

    cout<<"Decimal number giriniz :";       cin>>octalNumber;

    while(octalNumber!=0){

        decimalNumber+=(octalNumber%10) * pow(8,i);
        octalNumber/=10;
        ++i;
    }
    cout<<decimalNumber<<endl;

    return 0;

}
