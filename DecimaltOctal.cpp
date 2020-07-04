#include <iostream>


using namespace std;

int main()
{
    int octalNumber  = 0;
    int decimalNumber;
    int i = 1;

    cout<<"DecimaNumber giriniz :";     cin>>decimalNumber;

    while(decimalNumber!=0){
        octalNumber+=(decimalNumber%8)*i;
        decimalNumber/=8;
        i*=10;
    }
    cout<<octalNumber<<endl;

    return 0;
}
