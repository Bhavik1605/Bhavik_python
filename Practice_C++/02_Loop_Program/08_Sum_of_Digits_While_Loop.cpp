/* Program of the sum of all digits of a number */

#include<iostream>
using namespace std;

int main()
{
	int dig,num,add=0;
	
	cout<<"Enter Number of Your choice : ";
	cin>>num;
	
	while(num>0)
	{
		dig=num%10;
		num=num/10;
		add+=dig;
	}
	cout<<endl<<"Addition of All Given Digits :"<<add;
 
	return 0;
}
