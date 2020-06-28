#include <iostream>


using namespace std;

int main()
{
    double a , b , c;

    cout<<"Ücgenin a kenarını giriniz:";        cin>>a;
    cout<<"Üçgenin b kenarını giriniz:";        cin>>b;
    cout<<"üçgenin c kenarını giriniz:";        cin>>c;


    if((b-c)<a<b+c){
        cout<<"Üçgen olur";
    }
    else if((a-c)<b<a+c){
        cout<<"Üçgen olur";
    }
    else if((a-b)<c<a+b){
        cout<<"Üçgen olur";
    }
    else{
        cout<<"Üçgen geçersizdir"<<endl;
    }
    return 0;

}
