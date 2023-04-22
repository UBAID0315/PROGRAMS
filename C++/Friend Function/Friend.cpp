#include<iostream>
using namespace std;

class c2;

class c1
{
    int x;
    friend void exchange(c1 &,c2 &);
    public:
        void setvalue(int y)
        {
            x = y;
        }
        void display()
        {
            cout<<x<<endl;
        }
};

class c2
{
    int x;
    friend void exchange(c1 &,c2 &);
    public:
        void setvalue(int y)
        {
            x = y;
        }
        void display()
        {
            cout<<x<<endl;
        }
};

void exchange(c1 &o1,c2 &o2)
{
    int temp;

    temp = o1.x;
    o1.x = o2.x;
    o2.x = temp;
}

int main()
{
    c1 o1;
    c2 o2;

    o1.setvalue(32);
    o2.setvalue(67);

    exchange(o1,o2);

    cout<<"value of  c1 is: ";
    o1.display();
    cout<<"value of  c2 is: ";
    o2.display();
}
