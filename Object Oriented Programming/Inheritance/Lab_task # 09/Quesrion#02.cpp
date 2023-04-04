#include<iostream>
using namespace std;

                                        //    F I R S T       C L A S S

class Plane
{
    public:
        int maxAltitude;
        void fly();
        Plane();
        Plane(int);
};
Plane::Plane()
{
    maxAltitude = 0;
}
Plane::Plane(int Altitude)
{
    maxAltitude = Altitude;
}
void Plane::fly()
{
    cout<<"Flying"<<endl;
}

                                        //    S E C O N D     C L A S S

class Boat
{
    public:
        int boatLength;
        void swim();
        Boat();
        Boat(int);
};
Boat::Boat()
{
    boatLength = 0;
}
Boat::Boat(int length)
{
    boatLength = length;
}
void Boat::swim()
{
    cout<<endl;
    cout<<"Swimming"<<endl;
}

                                      //    T H I R D     C L A S S

class Skimmer : protected Plane,protected Boat
{
    private:
        int numPassenger;
    public:
        void swimandfly();
        Skimmer();
        Skimmer(int numPassenger,int maxAltitude,int length,string name):Plane(maxAltitude),Boat(length)
        {
            this->numPassenger = numPassenger;
            display(name,length);
        }
        void display(string name,int length);
};
Skimmer::Skimmer()
{
    numPassenger = 0;
}
void Skimmer::display(string name,int length)
{
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Length: "<<length<<endl;
    cout<<"Max Altitude: "<<maxAltitude<<endl;
    cout<<"Passengers: "<<numPassenger<<endl;
    swimandfly();
    cout<<"--------------------------------------------------"<<endl;
}
void Skimmer::swimandfly()
{
    swim();
    fly();
}

                                            //    M A I N       F U N C T I O N

int main()
{
    Skimmer s(2,13000,40,"Swim and Fly");
}