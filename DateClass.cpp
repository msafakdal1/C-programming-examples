#include <iostream>

using namespace std;

class Date{

private:
    int ay;
    int gun;
    int yıl;

public:
    Date(int month , int day , int year){
        if(month>=1 && month<=12){
            ay = month;
        }
        else{
           ay = 2;
        }
        gun = day;
        yıl = year;
    }
    void setMonth(int month){
        ay = month;
    }
    void setGun(int day){
        gun = day;
    }
    void setYıl(int year){
        yıl =year;
    }
    int getAy(){
        return ay;
    }
    int getGun(){
        return gun;
    }
    int getYıl(){
        return yıl;
    }
    void displayMessage(){
        cout<<"Ay: "<<getAy()<<"\nGun: "<<getGun()<<"\nYıl: "<<getYıl()<<endl;
    }
};
int main()
{
    Date date(18,27,1997);

    date.displayMessage();

    return 0;
}

