/*  C++ Program to raise any number X to power N  */

#include<iostream>
using namespace std;

int main()
{
	int e;
	double b,result=1;
	
	cout<<"Enter Base : ";
	cin>>b;
	cout<<"Enter Exponent : ";
	cin>>e;
	
	
	cout<<endl<<"Number "<<b<<" to Power "<<e<<" is : ";
	
	for(int i=e;i>0;i--)
	{
		result= result * b;
	}
	
	cout<<result;
}
