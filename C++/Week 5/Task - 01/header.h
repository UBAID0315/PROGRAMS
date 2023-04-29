#include<iostream>
using namespace std;

class Item
{
private:
    int id;
    string name;
    int price;
    int quantity;
public:
    void display_data(int size,Item items[]);
    void display_details();
    void update_data(Item items[]);
    void search_data(Item items[],int size,int id);
    Item();
    Item(int id,string name,int price,int quantity);
    int getId(int id);
    void setId(int id);
    string getname(string name);
    void setname(string name);
    int getprice(int price);
    void setprice(int price);
    int getquantity(int quantity);
    void setquantity(int quantity);
};