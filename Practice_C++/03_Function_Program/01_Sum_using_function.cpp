/* program to print the sum of two numbers entered by user by defining your own function. */

#include<iostream>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}

int main()
{
	int a,b;
	
	cout<<"Enter First Number : ";
	cin>>a;
	
	cout<<"Enter Second Number : ";
	cin>>b;
	
	cout<<endl<<"Total Sum of Two Numbers is : "<<sum(a,b);
	
	return 0;
}
