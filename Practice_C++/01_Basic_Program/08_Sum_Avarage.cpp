/* C++ Program to Find Sum and Average of three numbers  */

#include<iostream>
using namespace std;

int main()
{
	float n1,n2,n3,avg,sum;
	
	cout<<"Enter a First Number : ";
	cin>>n1;
	
	cout<<"Enter a Second Number : ";
	cin>>n2;
	
	cout<<"Enter a Third Number : ";
	cin>>n3;
	
	sum=n1+n2+n3;
	
	avg=sum/3;
	
	cout<<endl<<"The Sum of 3 Numbers [ "<<n1<<" + "<<n2<<" + "<<n3<<" ] is = "<<sum<<endl;
    cout<<endl<<"The Average of 3 Numbers [ "<<n1<<", "<<n2<<", "<<n3<<" ] is = "<<avg<<endl;
	
	
	return 0;
}
