/*  C++ Program to Check Character is Uppercase, Lowercase, Digit or Special */

#include<iostream>
using namespace std;

int main()
{
	char ch;
	
	cout<<"Enter any Character to Check : ";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	{
		cout<<endl<<"The Entered Character [ "<<ch<<" ] is an UPPERCASE character."<<endl;
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<endl<<"The Entered Character [ "<<ch<<" ] is an LOWERCASE character."<<endl;
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<endl<<"The Entered Character [ "<<ch<<" ] is a DIGIT."<<endl;
	}
	else
	{
		cout<<endl<<"The Entered Character [ "<<ch<<" ] is an SPECIAL character."<<endl;
	}
	
	
	return 0;
}
