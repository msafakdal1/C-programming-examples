#include <iostream>

using namespace std;

class Account{
private:
    unsigned int  accountNumber;
    double balance;
    string firstName;
    string lastName;

public:
    Account(unsigned int studentCounter , double initialBalance , string name , string surname){
        accountNumber = studentCounter;
        balance = initialBalance;
        firstName = name;
        lastName = surname;
    }
    unsigned int  getNumber(){
        return accountNumber;
    }
    double getBakiye(){
        return balance;
    }
    string getİlkİsim(){
        return firstName;
    }
    string getSonİsim(){
        return lastName;
    }
    void displayMessage(){
        cout<<"AccountNumber : "<<getNumber()<<"\nBakiye :"<<getBakiye()<<"\nİsim :"<<getİlkİsim()<<"\nSon İsim :"<<getSonİsim()<<endl;
    }
};
int main()
{
    Account hesap1(0,1000.0,"Safak","Dal");

    hesap1.displayMessage();

    return 0;
}
