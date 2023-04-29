#include<iostream>
#include"header.h"
using namespace std;


int main()
{
    int size,id,choose,price,quantity;
    string name;
    cout<<"Enter your size:"<<endl;
    cin>>size;

    Item item,items[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"ID: ";
        cin>>id;
        cout<<"Name: ";
        cin>>name;
        cout<<"Price: ";
        cin>>price;
        cout<<"Quantity: ";
        cin>>quantity;
        items[i] = Item(id, name, price, quantity);
        cout<<endl;
    }
    cout<<"choose from the menu"<<endl; 
    cout<<"1) Display Items"<<endl;
    cout<<"2) Update Items"<<endl;
    cout<<"3) Search Items"<<endl;
    cout<<"Enter your choose: "<<endl;
    cin>>choose;
    
    if (choose == 1)
    {
        for (int i = 0; i < size; i++)
        {
            items[i].display_data(size,items);
        }
    }
    else if(choose == 2)
    {
        cout<<"choose what you want to update"<<endl;
        cout<<"1) Price"<<endl;
        cout<<"2) Quantity"<<endl;
        item.update_data(items);
    }
    else if(choose == 3)
    {
        cout<<"Enter Id: ";
        cin>>id;
        item.search_data(items,size,id);
    }
}