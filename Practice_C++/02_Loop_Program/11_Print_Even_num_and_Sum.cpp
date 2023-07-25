/* program of displaying the n terms of even natural number and their sum */

#include<iostream>
using namespace std;

int main()
{
	int n,i,sum=0;
	
	cout<<"Enter Number of Terms : ";
	cin>>n;
	
	cout<<"The Even Numbers are : ";
	i=1;
	
	do
	{
		cout<<2*i<<" ";
		sum+=2*i;
		i++;
	}while(i<=n);
	
	cout<<endl<<"The Sum of Numbers Up to "<<n<<" Terms is: "<<sum;
	
	
	return 0;
}
