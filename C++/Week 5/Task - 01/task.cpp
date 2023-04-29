#include<iostream>
#include"header.h"

    Item::Item()
    {
        id = 0;
        name = "";
        price = 0;
        quantity = 0;
    }
    Item::Item(int id,string name,int price,int quantity)
    {
        this->id = id;
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    int Item::getId(int id)
    {
        return id;
    }
    
    void Item::setId(int id)
    {
        this->id = id; 
    }
    
    string Item::getname(string name)
    {
        return name;
    }
    
    void Item::setname(string name)
    {
        this->name = name; 
    }
    
    int Item::getprice(int price)
    {
        return price;
    }
    void Item::setprice(int price)
    {   
        this->price = price; 
    }
    int Item::getquantity(int quantity)
    {
        return quantity;
    }
    void Item::setquantity(int quantity)
    {
        this->quantity = quantity; 
    }

    void Item::display_data(int size,Item items[])
    {
    for (int i = 0; i < size; i++)
    {
        items[i].display_details();
    }   
    }
void Item::display_details() 
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Name: " <<name<<endl;
        cout<<"Price: " <<price<<endl;
        cout<<"Quantity: "<<quantity<<endl<<endl;
    }

void Item::update_data(Item items[])
{
    int choose;
    cout<<endl<<"Enter your option: "<<endl;
    cin>>choose;
    if (choose == 1)
    {
        cout<<"Enter your Id: "<<endl;
        cin>>id;
        if (items->getId(id) == id)
        {
            cout<<"Enter your price: "<<endl;
            cin>>price;
            items->setprice(price);
            cout<<"Price has been updated";
        }
    }
    else if(choose == 2)
    {
        cout<<"Enter your Id: "<<endl;
        cin>>id;
        if (items->getId(id) == id)
        {
            cout<<"Enter your quantity: "<<endl;
            cin>>quantity;
            items->setquantity(quantity);
            cout<<"Quantity has been updated";
        }
    }
}

void Item::search_data(Item items[],int size,int id)
{
    if (items->getId(id) == id)
    {
        items->display_details();
    }
    else
    {
        cout<<"Item not found";
    }
}