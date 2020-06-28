#include <iostream>


using namespace std;


int main() {

    unsigned int number;
    unsigned int buyuk1 = 0;
    unsigned int buyuk2 = 0;
    unsigned int count = 1;

    while(count<=5) {
        cout << "Bir sayı giriniz:";
        cin>>number;


        if (number > buyuk1) {
           buyuk2 = buyuk1;     //buyuk2 = 7
           buyuk1 = number;
        }
        else if(number>buyuk2){

            buyuk2 = number;
        }
        ++count;
    }
    cout<<"Buyuk1:"<<buyuk1<<endl;
    cout<<"Buyuk2:"<<buyuk2<<endl;

    return 0;

}
