/* Display the cube of the numbers upto a given integer */

#include<iostream>
using namespace std;

int main()
{
	double n;
	
	cout<<"Input The Number of Terms : ";
	cin>>n;
	
	cout<<endl;
	
	for(int i=1; i<=n; i++)
	{
		cout<<"["<<i<<"]"<<" Number is : "<<i<<" and The Cube is : "<<i*i*i<<endl;
	}
	
	return 0;
}
