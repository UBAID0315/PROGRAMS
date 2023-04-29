#include"header.h"

Favourite_Songs::Favourite_Songs()
{
    size = 0;
}
void Favourite_Songs::setsize(int size)
{
    this->size = size;
}
int Favourite_Songs::getsize()
{
    return size;
}

void Favourite_Songs::addSong(string *&arr)
{
    string name;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == "")
        {
            cout<<"Enter your song name: ";
            cin>>name;
            arr[i] = name;
            break;
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Song Added"<<endl;
        break;
    }
}
void Favourite_Songs::deletesong(string *&arr)
{
    if (size > 0) {
        size--;
        string* temp = new string[size];
        for (int i = 0; i < size; i++) {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<endl;
        cout<<"Song Deleted"<<endl;
    } 
}
void Favourite_Songs::updatesong(string *&arr)
{
    int index;
    string name;

    cout<<"Enter song number: ";
    cin>>index;

    cout<<"Name of song: ";
    cin>>name;

    arr[index - 1] = name;
    cout<<endl;
    cout<<"Name updated"<<endl;
}
void Favourite_Songs::printsong(string *&arr)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }   
}
void Favourite_Songs::backupsong(string *&arr)
{
    string *second_arr = new string [size];

    second_arr = arr;

    cout<<"Back-Up Successful"<<endl;    
}
