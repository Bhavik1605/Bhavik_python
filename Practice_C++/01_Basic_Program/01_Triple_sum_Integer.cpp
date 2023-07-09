/* C++ program to compute the sum of two given integer values. If the two values are the same, then return triple their sum. */

#include<iostream>
using namespace std;

int main()
{
	int x,y;
	
	cout<<"NOTE : If the two values are the same, then return triple their sum."<<endl;
	cout<<"---------------------------------------------------------------------"<<endl;
	
	cout<<"Enter first integer : ";
	cin>>x;
	
	cout<<"Enter second integer : ";
	cin>>y;
	
	x==y?cout<<"Your value ("<<x<<","<<y<<") and  Sum is : "<<(x+y)*3:cout<<"Your value ("<<x<<","<<y<<") and  Sum is : "<<x+y;
	
	return 0;
}
