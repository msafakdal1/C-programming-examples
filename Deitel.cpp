#include <iostream>

using namespace std;


int main() {
    unsigned salary;
    unsigned  employeeHours;
    unsigned resultSalary;

    while(employeeHours!=-1){
        cout<<"Çalışma saati:";      cin>>employeeHours;

        if(employeeHours==-1){
            break;
        }
        cout<<"Saatlik ücret:";       cin>>salary;

        if(employeeHours<=40){
            resultSalary = salary * employeeHours;
            cout<<"ResultSalary:"<<resultSalary<<endl;
        }
        else{
            resultSalary = (employeeHours * salary) + (salary * 0.5)*(employeeHours-40);
            cout<<"ResultSalary:"<<resultSalary<<endl;
        }
    }
    cout<<"Finish";
}
