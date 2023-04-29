#include<iostream>
#include<vector>
#include"header.h"

using namespace std;

int main()
{
    int option,size;
    Favourite_Songs s;
    cout<<"Enter size: ";
    cin>>size;
    s.setsize(size);

    string *arr = new string[size]();

    while (1)
    {
        cout<<endl;
        cout<<"1. Add a song"<<endl;
        cout<<"2. Delete a song"<<endl;
        cout<<"3. Update a song"<<endl;
        cout<<"4. Print all songs"<<endl;
        cout<<"5. Create Backup of Songs"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<endl;
        cout<<"Enter your option: ";
        cin>>option;

        if (option == 1)
        {
            s.addSong(arr);
        }
        else if(option == 2)
        {
            s.deletesong(arr);
        }
        else if(option == 3)
        {
            s.updatesong(arr);
        }
        else if (option == 4)
        {
            s.printsong(arr);
        }
        else if (option == 5)
        {
            s.backupsong(arr);
        }
        else if (option == 6)
        {
            break;
        }
    }
}