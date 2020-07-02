#include <iostream>
#include <string>

using namespace std;

class HeartRates{
private:
    string isim;
    string soyisim;
    int ay;
    int gun;
    int yıl;
public:
    HeartRates(string name , string surname , int month , int day , int year){
        isim = name;
        soyisim = surname;
        ay = month;
        gun = day;
        yıl = year;
    }
    void setİsim(int name){
        isim = name;
    }
    void setSoyisim(int surname){
        soyisim = surname;
    }
    void setAy(int month){
        ay = month;
    }
    void setGun(int day){
        gun = day;
    }
    void setYıl(int year) {
        yıl = year;
    }
    string getİsim(){
        return isim;
    }
    string getSoyisim(){
        return soyisim;
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
    int getAge(int yeniYıl){
        return yeniYıl - yıl;
    }
    int getMaxımumHartRate( int yeniYıl){
        int yas = yeniYıl - yıl;
        return 220 - yas;
    }
    int getTargetHeartRate(int dinlenikNabız , int yeniYıl){
        int hedefNabız , yas;
        yas = yeniYıl - yıl;

        hedefNabız = (((220 - yas)-dinlenikNabız)*0.8) + dinlenikNabız;
        return hedefNabız;
    }
};
int main()
{
    HeartRates myheartRates("Safak","Dal",12,23,1997);

    cout<<"İsim :"<<myheartRates.getİsim()<<"\nSoyisim :"<<myheartRates.getSoyisim()<<"\nAy :"<<myheartRates.getAy()<<"\nGun :"<<myheartRates.getGun()<<"\nYıl : "<<myheartRates.getYıl()<<endl;
    cout<<endl;

    cout<<"Simdiki Yas :"<<myheartRates.getAge(2020)<<"\nMax Kalp Atıs :"<<myheartRates.getMaxımumHartRate(2020)<<"\nHedef Kalp Atıs :"<<myheartRates.getTargetHeartRate(60,2020)<<endl;

    return 0;
    
}

