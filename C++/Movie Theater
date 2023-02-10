#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct Movie_data
{
    string title;
    string director;
    int year_release;
};

Movie_data createMoviedata()
{
    Movie_data data;

    cout<<"Enter Movie title: ";
    getline(cin,data.title);
    cout<<"Enter movie director: ";
    getline(cin,data.director);
    cout<<"Enter movie year: ";
    cin>>data.year_release;

    return data;
}

void displayMoviedata(Movie_data data)
{
    cout<<endl<<setfill('.')<<setw(30)<<left<<"Movie title:"<<data.title;
    cout<<endl<<setfill('.')<<setw(30)<<left<<"Movie director:"<<data.director;
    cout<<endl<<setfill('.')<<setw(30)<<left<<"Movie year release:"<<data.year_release;
}

int main()
{
    Movie_data x = createMoviedata();
    displayMoviedata(x);
} 
