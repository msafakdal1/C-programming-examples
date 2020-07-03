#include <iostream>
#include <iomanip>


using namespace std;


int main()
{
    unsigned int count = 1;

    while(count<=20){
        cout<<count;
        if(count%5==0){
            cout<<endl;
        }

        ++count;
    }
    return 0;
}
