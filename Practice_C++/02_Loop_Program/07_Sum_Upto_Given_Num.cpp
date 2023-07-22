/* Program to Print Sum Upto Given Number */

#include<iostream>
using namespace std;

int main()
{
	int num,sum=0;
	
	cout<<"Enter a Number : ";
	cin>>num;
	
	cout<<endl<<"Series Upto ["<<num<<"] Number : ";
	
	for(int i=1;i<=num;i++)
	{
		cout<<i<<" ";
		sum+=i;
	}
	
	cout<<endl<<"Total Sum Upto ["<<num<<"] Number is : "<<sum;
	return 0;
}
