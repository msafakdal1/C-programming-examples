#include <iostream>


using namespace std;


int main()
{
    for(int i=1;i<=10;++i){
        for(int j=1;j<=i;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int i=10;i>=1;--i){
        for(int j=1;j<=i;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int i=10;i>=1;--i){
        for(int k=1;k<=10-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int i=1;i<=10;++i){
        for(int k=10-i;k>=1;--k){
            cout<<" ";
        }
        for(int j=1;j<=i;++j){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}
