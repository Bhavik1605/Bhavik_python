/* program to reveres any given integer number */

#include<iostream>
using namespace std;

int main()
{
	int n,last;
	
	cout<<"Enter any number : ";
	cin>>n;

	cout<<endl<<"Reverse of number : ";
	
	while(n>0)
	{
		last=n%10;
		n=n/10;
		cout<<last;
	}

	return 0;
}
