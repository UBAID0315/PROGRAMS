#include<iostream>
using namespace std;

// #################################################  first class #####################################################

class Animal
{
     protected:
            string name,color;
     public:
            Animal(string,string);
            Animal();
            ~Animal();
            virtual void display()=0;
            void setname(string);
            void setcolor(string);
            string getname();
            string getcolor();
};
Animal::Animal()
{}
Animal::Animal(string name,string color)
{
    name = "";
    color = "";
}
Animal::~Animal()
{
    cout<<"Animal Destroyed"<<endl;
}            

void Animal::display()
{} 

void Animal::setname(string name)
{
    this->name = name;
}
void Animal::setcolor(string color)
{
    this->color = color;
}
string Animal::getname()
{
    return name;
}
string Animal::getcolor()
{
    return color;
}

// #################################################  second class #####################################################

class Deer : public Animal
{
    private:
        bool Antlers;
    public:
        void setdata(string name,string color,bool antler)
        {
            this->name = name;
            this->color = color;
            Antlers = antler;
        }
        Deer();
        ~Deer();
        void display();
        void setantler(bool antler);
        bool getantler();
}; 
Deer::Deer()
{}
Deer::~Deer()
{
    cout<<"Deer Destroyed"<<endl;
}
void Deer::display()
{
    cout<<endl;
    cout<<"Name: "<<getname()<<endl;
    cout<<"Color: "<<getcolor()<<endl;
    cout<<"Antler: "<<getantler()<<endl;
}
void Deer::setantler(bool antler)
{
    Antlers = antler;
}
bool Deer::getantler()
{
    return Antlers;
}
// ##################################################### third class ##########################################################

class Zebra : public Animal
{
    private:
        bool Stripes;
    public:
        void setdata(string name,string color,bool stripes)
        {
            this->name = name;
            this->color = color;
            Stripes = stripes;
        }      
        Zebra();  
        ~Zebra();
        void display();
        bool getstripe();
};
Zebra::Zebra()
{}
Zebra::~Zebra()
{
    cout<<"Zebra Destroyed"<<endl;
}
void Zebra::display()
{
    cout<<"Name: "<<getname()<<endl;
    cout<<"Color: "<<getcolor()<<endl;
    cout<<"Antler: "<<getstripe()<<endl;
}
bool Zebra::getstripe()
{
    return Stripes;
}
// ################################################### main function ############################################################3

int main()
{
    Animal *a;
    Zebra z;
    Deer d;

    string name,color,check;
    bool stripe,antler;

    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Color: ";
    cin>>color;
    cout<<"Deer/Zebra: ";
    cin>>check;
    
    if (check == "Z")
    {
        cout<<"Stripes: ";
        cin>>check;
        if (check == "yes")
        {
            stripe = true;
        }
        else if(check == "no")
        {
            stripe = false;
        }
        z.setdata(name,color,stripe);
        a = &z;
    }
    else if (check == "D") 
    {
        cout<<"Antler: ";
        cin>>check;
        if (check == "yes")
        {
            antler = true;
        }
        else if(check == "no")
        {
            antler = false;
        }
        d.setdata(name,color,antler);
        a = &d;
    }

    a->display();
}
