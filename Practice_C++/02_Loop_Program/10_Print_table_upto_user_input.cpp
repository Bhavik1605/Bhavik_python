/* display the multiplication table vertically from 1 to n */

#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout<<"Enter no. of terms upto print table 1 to ";
	cin>>a;
	
	for(int i=1;i<=a;i++)
	{
		cout<<"________TABLE NO: "<<i<<"_________"<<endl;
		for(int j=1;j<=10;j++)
		{
			cout<<i<<" * "<<j<<" = "<<i*j;
			cout<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}
