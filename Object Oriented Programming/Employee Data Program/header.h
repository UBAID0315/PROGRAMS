#include<iostream>
using namespace std;

class datetype
{
    int dDay,dMonth,dYear;
    public:
        void setDate(int &,int &,int &);
        void printdate();
};
class personType
{
    private:
        string f_name;
        string l_name;
        string name;
    public:
        void setname(string,string);
        string getname();
        void printname();
};
class PersonInfo
{
    private: 
        int personID;
    public:
        personType name;
        datetype bday;
        void setpersoninfo(string ,string ,int ,int ,int ,int );
        void printinfo();
};
