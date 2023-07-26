#include<iostream>
using namespace std;

int main()
{
	int n;
	int a,e,se=0,o,so=0;
	
	
	cout<<"Enter number of term to take input : ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter "<<i<<" value : ";
		cin>>a;
		
		if(a % 2 == 0)
		{
			e++;
			se+=a;
		}
		else
		{
			o++;
			so+=a;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a%2==0)
		{
			cout<<a<<" ";
		}
	}
	cout<<"\n\n";
	cout<<"Total count of your even number : "<<e<<endl;
	cout<<"Total sum of your even number : "<<se<<endl;	
	cout<<"Total count of your odd number : "<<o<<endl;
	cout<<"Total sum of your odd number : "<<se<<endl;
	
	return 0;
}
