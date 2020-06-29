#include <iostream>

using namespace std;

int main()
{
    int count = 1;
    double nufus = 7000000000;
    double artıs = 77760000;

    cout<<"Yıllar\t\tBeklenen nüfus\t\t\tArtıs"<<endl;
    cout<<"------\t\t---------------\t\t-----------"<<endl;
    while(count<=75){
        cout<<count<<". yıl\t\t\t"<<nufus<<"\t\t\t"<<artıs<<endl;

        nufus+=artıs;

        ++count;
    }
}
