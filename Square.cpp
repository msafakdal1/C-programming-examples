#include <iostream>

using namespace std;

int main() {

    unsigned  int count = 3;
    unsigned  int square;

    cout<<"Enter the side of the squre number:";        cin>>square;


    cout<<"* * * * *"<<endl;

    while(count<=square){
        cout<<"*       *"<<endl;
        ++count;
    }
    cout<<"* * * * *";

    return 0;

}
