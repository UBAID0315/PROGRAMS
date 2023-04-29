#include<iostream>
using namespace std;

class Account
{
    private:
        string name;
        int balance;
    
    public:
        int depositAmount(int amount)
        {
            balance = balance + amount;
            return balance;
        }
        int withdrawAmount(int amount)
        {
            if (amount <= balance)
            {
                balance = balance - amount;
            }
            else
            {
                cout<<"Issuficient-Balance"<<endl;
            }
            
            return balance;
        }
        void setname(string name)
        {
            this->name = name;
        }
        void setbalance(int value)
        {
            balance = value;
        }
        int getbalance()
        {
            return balance;
        }
        string getname()
        {
            return name;
        }
};

Account createAccount()
{
    Account user;
    string name;
    int value,balance;

    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Your account has been created"<<endl;
    cout<<"Enter your balance: "<<endl;
    cin>>value;

    user.setname(name);
    user.setbalance(value);
    
	return user;
}

int main()
{
    Account u1;
    u1 = createAccount();
    int choose;
    int amount,balance;

    cout<<"choose from menu:"<<endl;
    cout<<"1) Display data"<<endl;
    cout<<"2) Deposit amount"<<endl;
    cout<<"3) Withdraw amount"<<endl;
    cout<<"4) Exit"<<endl;
    cin>>choose;
    
    if(choose == 1)
    {
        cout<<"Name is: "<<u1.getname()<<endl;
        cout<<"Balance is: "<<u1.getbalance()<<endl;
    }
    else if(choose == 2)
    {
        cout<<"Enter your deposit amount: "<<endl;
        cin>>amount;
        balance = u1.depositAmount(amount);
        cout<<"Your total-balance is: "<<balance;
    }
    else if(choose == 3)
    {
        cout<<"Enter your withdraw amount: "<<endl;
        cin>>amount;
        balance = u1.withdrawAmount(amount);
        cout<<"Your remaining-balance is: "<<balance;
    }
}
