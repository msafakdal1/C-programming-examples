#include <iostream>
#include <string>


using namespace std;

class İnvoice{
private:
    string parcaNumarası;
    string urun;
    int miktar;
    int fiyat;
public:
    İnvoice(string model , string marka , int boyut , int maliyet){
        parcaNumarası = model;
        urun = marka;
        miktar = boyut;
        fiyat = maliyet;
    }
    void setparcaNumarası(string model){
        parcaNumarası = model;
    }
    void seturunmarka(string marka){
        urun = marka;
    }
    void setMiktar(int  boyut){
       if(boyut<=0){
           boyut = 0;
       }
       else{
           miktar = boyut;
       }
    }
    void setFiyat(int maliyet){
       if(maliyet<=0){
           maliyet = 0;
       }
       else{
           fiyat = maliyet;
       }
    }
    string getparcaNumarası(){
        return parcaNumarası;
    }
    string geturunmarka(){
        return urun;
    }
    int getMiktar(){
        return miktar;
    }
    int getFiyat(){
        return fiyat;
    }
    int getInvoiceAmount(){
        return fiyat * miktar;
    }

};
int main()
{
    İnvoice product1("T-shirt","Hummel",100,300);
    İnvoice product2("Coat","Adidas",80,10);



    cout<<"----------Birinci Ürün----------"<<endl;
    cout<<"Model:"<<" "<<product1.getparcaNumarası()<<" "<<"\nMarka:"<<product1.geturunmarka()<<" "<<"\nMiktar:"<<product1.getMiktar()<<" "<<"\nFiyat:"<<product1.getFiyat()<<" "<<"\nGenel toplam:"<<product1.getInvoiceAmount()<<"Tl "<<endl<<endl;
    cout<<"----------İkinci Ürün----------"<<endl;
    cout<<"Model:"<<" "<<product2.getparcaNumarası()<<" "<<"\nMarka:"<<product2.geturunmarka()<<" "<<"\nMiktar:"<<product2.getMiktar()<<" "<<"\nFiyat:"<<product2.getFiyat()<<" "<<"\nGenel toplam:"<<product2.getInvoiceAmount()<<"Tl "<<endl;
    return 0;

}
