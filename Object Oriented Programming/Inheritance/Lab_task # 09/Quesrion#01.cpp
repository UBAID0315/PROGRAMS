#include<iostream>
using namespace std;

// #############################################################

class Animal
{
    public:
        int age;
        string name;
        void speak();
        Animal(); 
        Animal(int age,string name);      
};
Animal::Animal()
{
    age = 0;
    name = "";
}
Animal::Animal(int age,string name)
{
    this->age = age;
    this->name = name;
}
void Animal::speak()
{}

// ###############################################################

class Bird:private Animal
{
    private:
        int wing_Length;
    public:
        Bird();
        Bird(int age, string name,int wing_len);
        void speak();
};
Bird::Bird()
{
    wing_Length = 0;
}
Bird::Bird(int age, string name,int wing_len)
{
    this->age = age;
    this->name = name;
    wing_Length = wing_len;
}
void Bird::speak()
{
    cout<<"I am a "<<name<<endl;
    cout<<"My Age is: "<<age<<endl;
    cout<<"My Wing length is: "<<wing_Length<<endl;
    cout<<"I am a bird and I can sing"<<endl;
}

// ###############################################################

class Reptile:private Animal
{
    private:
        string habitat;
    public:
        Reptile();
        Reptile(int age,string name,string habitat):Animal(age,name);        
        void speak();
};

Reptile::Reptile(int age,string name,string habitat):Animal(age,name)
{
    this->age = age;
    this->name = name;
    this->habitat = habitat;
}
Reptile::Reptile()
{
    habitat = "";
}
void Reptile::speak()
{
    cout<<"I am a "<<name<<endl;
    cout<<"My Age is: "<<age<<endl;
    cout<<"I am a reptile and I can "<<habitat<<endl;
}

// ##############################################################

int main()
{
    string name;
    int age,wing;

    Reptile r(5,"Crocodile","Creep");
    Bird b(2,"Parrot",13);

    b.speak();
    cout<<endl;
    r.speak();
}
