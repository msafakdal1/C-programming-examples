#include <iostream>

using namespace std;

int main()
{
    int sayı  , x;
    int min = INT_MAX; 

    cout<<"x sayısını giriniz :";        cin>>x;

    for(int i=1;i<=x;++i){
        cout<<"Sayı giriniz :";         cin>>sayı;

        if(min>sayı)    min = sayı;
    }
    cout<<"Min :"<<min<<endl;

    return 0;

}
