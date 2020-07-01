#include <iostream>
#include <string>



using namespace  std;

class Employee{

private:
    string isim;
    string soyad;
    int maas;

public:
    Employee(string name , string surname , int salary){
        isim = name;
        soyad = surname;
        maas= salary;
    }

    void setİsim(string name){
        isim = name;
    }
    void setSoyad(string surname){
        soyad = surname;
    }
    void setMaas(int salary){
      if(salary<=0){
          salary = 0;
      }
      else{
          maas = salary;
      }
    }
    string getİsim(){
        return isim;
    }
    string getSoyad(){
        return soyad;
    }
    int getMaas(){
        return maas;
    }
    int getYıllımaas(int yıllık){
       yıllık = 30 * maas;
       return yıllık;
    }
    int getZamlıMaas(int yıllık  , int zam){
       int toplam;

       toplam = yıllık + yıllık * 0.1;

       return toplam;

    }
};
int main()
{

    Employee employee1("Safak","Dal",5000);
    Employee employee2("Caglar","Dal",4000);

    cout<<"İsim: "<<employee1.getİsim()<<"\nSoyad :"<<employee1.getSoyad()<<"\nMaas :"<<employee1.getMaas()<<"\nYıllık Maas : "<<employee1.getYıllımaas(150000)<<endl;
    cout<<"Zamlı Yıllık Maas : "<<employee1.getZamlıMaas(150000,0.1)<<endl;
}
