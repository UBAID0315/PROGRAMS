#include<iostream>
#include<string>

using namespace std;
int main()
{
	string name,pass_1,pass_2;

	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your password: ";
	cin>>pass_1;
	
	if(pass_1.length() >= 8)
	{
		for(int i=0; pass_1[i] != '\0'; i++)
		{
			if	((pass_1[i] == '%')||(pass_1[i] == '!')||(pass_1[i] == '*')||(pass_1[i] == '^')||
		   	  	(pass_1[i] == '&')||(pass_1[i] == '@')||(pass_1[i] == '#')||(pass_1[i] == '$'))
		   	{
		   		cout<<"Re-type your password: ";
		   		cin>>pass_2;
		   		if(pass_1 == pass_2)
		   		{
		   			cout<<endl;
					cout<<"Congratulation! You have membership now";	
				}
			}
		}
	}
	else
	{
		cout<<endl;
		cout<<"Password is too short(must be on 8-digits)";
	}
}
