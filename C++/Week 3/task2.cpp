#include<iostream>
#include<string>
using namespace std;


struct studentdata
{
    string name;
    int marks[3];
};

void enter_data(studentdata s[2]);
void display_data(studentdata s[2]);
void change_marks(studentdata s[2]);
void calculate_average(studentdata s[2]);

int main()
{
    studentdata s[2];
    int choice;

    enter_data(s);             // calling of a function

    cout<<"Menu: "<<endl;
    cout<<"1- Display student data"<<endl;
    cout<<"2- Calculate Average Marks"<<endl;
    cout<<"3- Change Marks"<<endl<<endl;
    cout<<"please! choose one option: "<<endl;
    cin>>choice;

    if(choice == 1)
    {
        display_data(s);
    }
    else if(choice == 2)
    {
        calculate_average(s);
    }
    else if(choice == 3)
    {
        change_marks(s);
    }
}
// 0------------( Functions )------------0
void enter_data(studentdata s[2])
{
    for (int i = 0; i < 2; i++)
    {
        cout<<"Name of Student: ";
        cin>>s[i].name;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Course Numbers-"<<j+1<<":";
            cin>>s[i].marks[j];
        }
        cout<<endl;   
    }
}
void display_data(studentdata s[2])
{
    int choose;

    cout<<endl<<"Student Number: ";
    cin>>choose;
    if(choose == 1)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Course Numbers-"<<j+1<<":"<<s[choose-1].marks[j]<<endl;
        }
    }
    else if(choose == 2)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Course Numbers-"<<j+1<<":"<<s[choose-1].marks[j]<<endl;
        }
    }
}

void change_marks(studentdata s[2])
{
    int choose,number,course_no;
    char option;

    cout<<"Enter the student number: "<<endl;
    cin>>choose;

    if (choose == 1)
    {
        cout<<"Enter the course number: ";
        cin>>course_no;
        if(course_no == 1)
        {
            cout<<"The updated marks: "<<endl;
            cin>>s[choose-1].marks[course_no];
        }
        else if(course_no == 2)
        {
            cout<<"The updated marks: "<<endl;
            cin>>s[choose-1].marks[course_no];
        }
        else if(course_no == 3)
        {
            cout<<"The updated marks: "<<endl;
            cin>>s[choose-1].marks[course_no];
        }
    }
    else if(choose == 2)
    {
        cout<<"Enter the course number: ";
        cin>>course_no;
        if(course_no == 1)
        {
            cout<<"The updated marks: "<<endl;
            cin>>s[choose-1].marks[course_no];
        }
        else if(course_no == 2)
        {
            cout<<"The updated marks: "<<endl;
            cin>>s[choose-1].marks[course_no];
        }
        else if(course_no == 3)
        {
            cout<<"The updated marks: "<<endl;
            cin>>s[choose-1].marks[course_no];
        }
	}
}
void calculate_average(studentdata s[2])
{
	int average=0,number;
	
       cout<<"Enter the student number: "<<endl;
       cin>>number;
       if(number == 1)
       {
         for (int i = 0; i < 3; i++)
         {
           average = average + s[number-1].marks[i];
         }        
       }
       else if(number == 2)
       {
         for (int i = 0; i < 3; i++)
         {
           average = average + s[number-1].marks[i];
         }        
       }

       average /= 3;
       cout<<"the result is: "<<average;
}
