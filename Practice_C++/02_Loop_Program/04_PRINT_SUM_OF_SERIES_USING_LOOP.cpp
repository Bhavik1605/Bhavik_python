/* Prompt the user and let them enter two integers(suppose x,y).  
   Compute and print the sum of the ingeters in the range x through y.
   Output should look like   num1 + num2 + num3 +..... = total sum */
   
#include<iostream>
using namespace std;

int main()
{
	int x,y,sum=0;
	
	cout<<"Enter a First Integer (X) : ";
	cin>>x; 
	
	cout<<"Enter a Second Integer (Y) : ";
	cin>>y;
	
	if(x>y)
	{
		int temp=x;
		x=y;
		y=temp;
	}
	
	for(int i=x;i<=y;i++)
	{
		sum+=i;
		cout<<"("<<i<<")";
		
		if(i<y)
		{
			cout<<" + ";
		}
	}
	
	cout<<" = "<<sum;
	
	return 0;
}
