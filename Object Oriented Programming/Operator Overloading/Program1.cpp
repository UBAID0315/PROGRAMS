#include<iostream>
using namespace std;

class rectangletype
{
    int length;
    int width;
    public:
            rectangletype()
            {
                length = 0;
                width = 0;
            }
            rectangletype(int l,int w)
            {
                length = l;
                width = w;
            }
            void operator ++(int)
            {
                length++;
                width++;    
            }
            int getlength()
            {
                return length;
            }
            int getwidth()
            {
                return width;
            }
};

int main()
{
    rectangletype r1(3,4),r2(5,6),r3;

    r1++;
    r2++;

    cout<<"Length: "<<r1.getlength()<<", Width: "<<r2.getlength()<<endl;
}
