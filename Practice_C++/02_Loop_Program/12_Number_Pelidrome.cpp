//check to Number is pelidrome or not.

#include<iostream>
using namespace std;

int main()
{
	int n,ld;
	
	cout<<"enter a number : ";
	cin>>n;
	
	int temp=0;
	int copy=n;
	
	for(int i=1;copy>0;i++)
	{
		ld = copy % 10;
		temp = temp*10 + ld;
		copy = copy / 10;
	}
	
	if(n==temp)
	{
		cout<<"Your number is pelidrome.";
	}
	else
	{
		cout<<"Your number is not pelidrome.";
	}
	
	return 0;
}
