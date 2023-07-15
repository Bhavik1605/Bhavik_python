/* C++ program to check whether three given integer values are in the range 20..50 inclusive */

#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;	
	
	cout<<"Enter First Number : ";
	cin>>n1;
	
	cout<<"Enter Second Number : ";
	cin>>n2;
	
	cout<<"Enter Third Number : ";
	cin>>n3;
	
	if(n1>=20 && n1<=50 && n2>=20 && n2<=50 && n2>=20 && n2<=50)
	{
		cout<<endl<<n1<<","<<n2<<","<<n3<<" All Number is Between 20 to 50.";
	}
	else
	{
		cout<<endl<<n1<<","<<n2<<","<<n3<<" All Number is Not Between 20 to 50.";
	}
	
	
	return 0;
}
