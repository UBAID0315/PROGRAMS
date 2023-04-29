#include"task.h"

string Employee::getname()
    {
        return name;
    }
int Employee::getid()
    {
        return id;
    }
string Employee::gettitle()
    {
        return job_title;
    }
int Employee::gethour()
    {
        return hours;
    }

void Employee::setname(string name)		
    {
        this->name = name;
    }
void Employee::setid(int id)
    {
        this->id = id;
    }
void Employee::settitle(string title)
    {
        job_title = title;
    }
void Employee::sethour(int hours)
    {
        this->hours = hours;
    }
double Employee::calculate_salary()
    {
        int salary,hour_rate = 100;

        if (hours <= 40)
        {
        }
        else if(hours > 40)
        {
            int extra;
            extra = hours - 40;
            salary = hours * hour_rate;
            salary = salary - (extra * hour_rate);
            salary *= 2;
        }
        return salary;
    }