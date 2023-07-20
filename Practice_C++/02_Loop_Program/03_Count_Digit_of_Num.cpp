/* Program to find the length of a number */

#include<iostream>
using namespace std;
int main()
{
	int num,a=0;
	cout<<"Please Enter any number : ";
	cin>>num;
	for(int i=0;num>0;i++)
	{
		num=num/10;
		a++;
	}
	cout<<"Number of digits in given number is: "<<a;
	return 0;
}
