#include<iostream>
#include"header.h"
using namespace std;

int main()
{
    PersonInfo p;
    string fname,lname;
    int id,day,month,year;

    cout<<"\t\t\t\t\t--------------------------------"<<endl;
    cout<<"\n\t\t\t\t\t   Fill up some information"<<endl;
    cout<<"\n\t\t\t\t\t--------------------------------"<<endl;

    cout<<"First Name: ";
    cin>>fname;
    // cout<<endl;
    cout<<"Last Name: ";
    cin>>lname;
    // cout<<endl;
    cout<<"Enter Day: ";
    cin>>day;
    cout<<"Enter Month: ";
    cin>>month;
    cout<<"Enter Year: ";
    cin>>year;
    cout<<"Enter id: ";
    cin>>id;

    p.setpersoninfo(fname,lname,day,month,year,id);
}