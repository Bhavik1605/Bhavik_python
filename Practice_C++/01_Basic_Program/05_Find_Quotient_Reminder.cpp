/*  C++ Program to Find Quotient and Remainder of 2 numbers  */

#include<iostream>
using namespace std;

int main()
{
	int di,div,qu,re;
	
	cout<<"Enter Dividend :: ";
	cin>>div;
	
	cout<<"Enter Divisor :: ";
	cin>>di;
	
	qu = div / di;
	re = div % di;
	
	cout<<"\nQuotient = "<<qu<<endl;
	cout<<"\nReminder = "<<re;
	
	
	return 0;
}
