/*  C++ program to Print Multiplication Table of a given number  */

#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter a Table Number : ";
	cin>>n;
	
	cout<<endl<<"Multiplication Table of a given number [ "<<n<<" ] is : "<<endl<<endl;
	for(int i=1;i<=10;i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
	
	return 0;
}
