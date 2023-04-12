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
            // ~Animal();
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
// Animal::~Animal()
// {
//     cout<<"Animal Destroyed"<<endl;
// }            

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
        Deer(string name,string color,bool antler):Animal(name,color)
        {
            this->name = name;
            this->color = color;
            Antlers = antler;
        }
        Deer();
        // ~Deer();
        void display();
        void setantler(bool antler);
        bool getantler();
}; 
Deer::Deer()
{}
// Deer::~Deer()
// {
//     cout<<"Deer Destroyed"<<endl;
// }
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
        Zebra(string name,string color,bool stripes):Animal(name,color)
        {
            this->name = name;
            this->color = color;
            Stripes = stripes;
        }      
        Zebra();  
        // ~Zebra();
        void display();
        bool getstripe();
};
Zebra::Zebra()
{}
// Zebra::~Zebra()
// {
//     cout<<"Zebra Destroyed"<<endl;
// }
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

void displayall(Animal *a[])
{
    for(int i=0; i<2; i++)
    {
        a[i]->display();
    }
}

int main()
{
    Animal *a[2];

    a[0] = new Zebra({"Khumba", "white", true});
    a[1] = new Deer({"Bambi", "brown", false});

    displayall(a);
}
