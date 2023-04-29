#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
	float kg, m,bmi;
	
	cout<<"Enter your kilograms: ";
	cin>>kg;
	cout<<"Enter your meters: ";
	cin>>m;
	
	bmi = kg / (m*m);
	
	cout<<"Your total BMI is: "<<setprecision(3)<<bmi<<endl;
}
