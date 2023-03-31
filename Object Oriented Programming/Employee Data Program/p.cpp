#include"header.h"

void datetype::setDate(int &day,int &month,int &year)
{
    dDay = day;
    dMonth = month;
    dYear = year;
}
void datetype::printdate()
{
    cout<<dDay<<" / "<<dMonth<<" / "<<dYear<<endl;
}

void personType::setname(string fname,string lname)
{
    f_name = fname;
    l_name = lname;
    name = f_name +" "+ l_name;
}
string personType::getname()
{   
    return name;
}
void PersonInfo::setpersoninfo(string first,string last,int day,int month,int year,int id)
{
    name.setname(first,last);
    bday.setDate(day,month,year);
    personID = id;
}
void PersonInfo::printinfo()
{
    cout<<"Person ID: "<<personID<<endl;
    name.printname();
    cout<<endl;
    bday.printdate();
}