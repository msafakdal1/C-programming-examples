#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    double number = 333.546372;

    cout<<setprecision(1);
    cout<<number<<" ";
    cout<<setprecision(2);
    cout<<setw(15)<<number<<right<<" ";
    cout<<setprecision(3);
    cout<<setw(15)<<number<<right<<endl;

    return 0;

}
