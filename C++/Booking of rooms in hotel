#include<iostream>
#include<iomanip>
using namespace std;
void display(char hotel[4][5]);


int main()
{
    char option,hotel[4][5];
    int floor,room,days;
    
    for(int i=0;i<4;i++)
    {
    	for(int j=0;j<5;j++)
        {
            hotel[i][j]='-';
        }              
    }	
	cout<<"Welcome to your hotel"<<endl<<"\nchoose the menu:"<<endl;

    while(1)
    {	
	    cout<<endl<<"1) Show booking rooms"<<endl;
	    cout<<"2) Book a room"<<endl;
	    cout<<"3) Exit the program\n"<<endl;
	    cin>>option;
	    cout<<endl;
	
    if(option == '1')
    {
	    for(int i=0;i<4;i++)
    	{
    		for(int j=0;j<5;j++)
        	{
         	   cout<<hotel[i][j]<<"\t";
       		}
			cout<<endl;	              
    	}
    }
    else if(option == '2')
    {
         cout<<"Enter the number of floor you want to see room(1 - 4): ";
         cin>>floor;
         cout<<"Enter the number of room you want to occupy(1 - 5): ";
         cin>>room;
         cout<<"Enter the number of days you want to stay: ";
         cin>>days;
         cout<<endl;
         
        if(hotel[floor-1][room-1] == '-')
        {
            cout<<"Your room "<<room<<", floor "<<floor<<" is successfully booked for you";
            hotel[floor-1][room-1] = '*';
        }
        else if(hotel[floor][room] == '*')
        {
            display(hotel);
            cout<<"This room is already booked! Please try anyother";
        }
    }
    else if(option == '3')
    {
    	if((floor == 1)||(floor == 2))
    	{
    		days *= 6000;
		}
		else if((floor == 3)||(floor == 4))
		{
			days *= 10000;
		}
    	break;
    }
	}
	cout<<"Your total bill is: "<<days;
}

void display(char hotel[4][5])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            hotel[i][j]='-';
        }
    }
}
