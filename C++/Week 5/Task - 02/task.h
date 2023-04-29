#include<string>
using namespace std;
class Employee
{
    private:

    int id;
    string name;
    string job_title;
    int hours;

    public:

    // setters

	void setname(string name);
	void setid(int id);
    void settitle(string title);
	void sethour(int hours);
	double calculate_salary();
	
    // getters
	string getname();
    int getid();
	string gettitle();
	int gethour();

};