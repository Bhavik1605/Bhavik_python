/* Program to print Fibonacci Series */

#include<iostream>
using namespace std;

int main()
{
	int num,a=0,b=1,c;
	
	cout<<"Enter Number of Terms of Fibonacci Series : ";
	cin>>num;
	
	cout<<endl<<"-------------------------------------------------------------------------------------------"<<endl;
	cout<<endl<<"Fibonacci Series upto ["<<num<<"] Terms are : ";
	for(int i=1;i<=num;i++)
	{
		
		cout<<a;
		
		if(i<num)
		{
			cout<<" + ";
		}
		
		c=a+b;
		a=b;
		b=c;
	}
	
	return 0;
}
