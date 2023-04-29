#include<iostream>
#include"task.h"

using namespace std;

int main()
{
    int no_employee,id,hours;
    string name,title;

    cout<<"Enter the number of Employee: ";
    cin>>no_employee;

    Employee e[no_employee];

for(int i=0;i<no_employee;i++)
{
    cout<<"\nEnter the e-name: ";
    cin>>name;
    cout<<"Enter the e-id: ";
    cin>>id;
    cout<<"Enter the e-job_title: ";
    cin>>title;
    cout<<"Enter the e-hour: ";
    cin>>hours;
    e[i].setname(name);
    e[i].setid(id);
    e[i].settitle(title);
    e[i].sethour(hours);
    e[i].calculate_salary();
}
cout<<endl;
for (int i = 0; i < no_employee; i++)
{
    cout<<"E-Name: "<<e[i].getname()<<endl;
    cout<<"E-Id: "<<e[i].getid()<<endl;
    cout<<"E-Title: "<<e[i].gettitle()<<endl;
    cout<<"E-Hours: "<<e[i].gethour()<<endl;
    cout<<"E-Salary: "<<e[i].calculate_salary();
}
return 0;
}