#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;
	
	cout<<"Enter first number : ";
	cin>>n1;
	cout<<"Enter second number : ";
	cin>>n2;
	cout<<"Enter third number : ";
	cin>>n3;
	
	if(n1!=n2 || n2!=n3 || n3!=n2)
	{
		if(n1>n2)
		{
			if(n1>n3)
			{
				cout<<n1<<" is the largest number.";
			}
			else
			{
				cout<<n3<<" is the largest number.";
			}
		}
		else
		{
			if(n2>n3)
			{
				cout<<n2<<" is the largest number.";
			}
			else
			{
				cout<<n3<<" is the largest number.";
			}
		}	
	}
	else
	{
		cout<<"All numbers are same!!!";
	}
	
	
	return 0;
}
