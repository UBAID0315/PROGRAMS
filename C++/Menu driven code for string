#include<iostream>

using namespace std;

int main()
{
    string str,temp;
    char choice,charactor;
    int vowel = 0,consonant = 0;
    
     cout<<"Enter your string: ";
     cin>>str;
    
     cout<<"\nWhich operation you want to perform?\n1) Count the number of vowels in this string\n2) Count both the vowels and consonants\n3) Display the most frequent charactor\n4) Concatenate this string with another existing string";
     cout<<endl;
     cout<<"\nEnter your choice: ";
     cin>>choice;
    
    if(choice == '1')
    {
        int i = 0;
        while(str[i] != '\0')
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
               str[i]=='o' || str[i]=='u' || str[i]=='A' ||
               str[i]=='E' || str[i]=='I' || str[i]=='O' ||
               str[i]=='U')
            {
                   vowel++;       
            }
            i++;
        }
        cout<<"The no of vowels are: "<<vowel;
    }
    else if(choice == '2')
    {
        int i = 0;
        while(str[i] != '\0')
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
               str[i]=='o' || str[i]=='u' || str[i]=='A' ||
               str[i]=='E' || str[i]=='I' || str[i]=='O' ||
               str[i]=='U')
            {
                   vowel++;       
            }
            else
            {
                consonant++;
            }
            i++;
        }
        cout<<"The no of vowels are: "<<vowel<<endl;
        cout<<"The no of vowels are: "<<consonant;        
    }
    else if(choice == '3')
    {
        for(int i=0; i < str.length(); i++)
        {
            for(int j=0; j < str.length(); j++)
            {
//              if(str[j]==str[j+1])
//              {
//                
//              }
            }
        }
    }
    else if(choice == '4')
    {
    	cout<<"Enter another string: ";
    	cin>>temp;
    	cout<<str + " " <<temp;
	}
}
