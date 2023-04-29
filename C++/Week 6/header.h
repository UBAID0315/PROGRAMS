#include<iostream>
using namespace std;

class Favourite_Songs 
{
private:
    int size;
public:
    void addSong(string *&arr);
    void deletesong(string *&arr);
    void updatesong(string *&arr);
    void printsong(string *&arr);
    void backupsong(string *&arr);

    void setsize(int);
    int getsize();
    Favourite_Songs();
};