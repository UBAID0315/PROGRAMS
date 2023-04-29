#include<iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Dice 
{ 
    private:
        int number;
    
    public:
    void roll()
    {
        srand(time(NULL));
        number = 0;
        number = (rand() % 6)+1;

        if(number == 6)
        {
            cout<<"Side: "<<number<<" (Chaakkaaaa)"<<endl;
        }
        else
        {
            cout<<"Side: "<<number<<"(Better luck try next time)"<<endl;
        }
    }
};

int main()
{
    Dice number;
    char choose;

    do
    {
        cout<<endl<<"Do you want to roll the dice?Y/N"<<endl;
        cin>>choose;
        if(choose == 'Y'||choose == 'y')
        {
            number.roll();
        }
        else if(choose == 'N'||choose == 'n')
        {
            cout<<"(Program exits)";
        }
    } while (choose == 'Y'||choose == 'y');    
}
