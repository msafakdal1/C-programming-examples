#include <iostream>


using namespace std;


int main()
{
    int  numara;
    int   sayı;
    int toplam = 0;
    int result;
    int devamMı;


    while(numara!=-1){
        cout<<"Ürün numarasını giriniz:";           cin>>numara;
        cout<<"Aldığınız ürün adedini giriniz:";    cin>>sayı;
        switch(numara){

            case 1:
                result = 2.98 * sayı;
                cout<<"Result :"<<result;   break;
            case 2:
                result = 4.50 * sayı;
                cout<<"Result :"<<result;   break;
            case 3:
                result = 9.98 *sayı;
                cout<<"Result :"<<result; break;
            case 4:
                result = 4.49 * sayı;
                cout<<"Result :"<<result; break;
            case 5:
                result = 6.87 * sayı;
                cout<<"Result :"<<result; break;
        }

        toplam+=result;

        cout<<endl;
        cout<<"**********Devam etmek ister misiniz**********"<<"\n"<<"Devam etmek için 1 e basınız :"<<endl;

        cin>>devamMı;

        if(devamMı==0){
            break;
        }
    }
    cout<<"Toplam :"<<toplam<<endl;

    return 0;
}
