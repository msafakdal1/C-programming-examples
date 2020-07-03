
#include <iostream>

using namespace std;

class gradeBook{

private:
    string ders;
    string hoca;

public:
    gradeBook(string lesson , string professor){
        ders = lesson;
        hoca = professor;
    }
    void setDers(string lesson , string professor){
        ders = lesson;
        hoca = professor;
    }
    string getBook(){
        return ders;
    }
    string  getHoca(){
        return hoca;
    }
    void info(){
        cout<<"Welcome\t"<<"This course name is presented by:"<<" "<<getBook()<<"\nThis is course:"<<" "<<getHoca()<<endl;
    }
};
int main()
{
    gradeBook  program("C++","Fatih Aydın");

    program.info();

}
