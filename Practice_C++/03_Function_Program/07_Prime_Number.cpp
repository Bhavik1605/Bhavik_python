/*  C++ Program to Check Prime Number using function  */

#include <iostream>
using namespace std;

void Prime(int n)
{
	int i, a = 0;
	for(i=2; i<=n/2; ++i)
	{
		if(n%i==0)
		{
			a=1;
	        break;
    	}
   }
   if (a==0)
   {
		cout<<endl<<n<<" is a prime number"<<endl;
   }
   else
   {
		cout<<endl<<n<<" is not a prime number"<<endl;
   }
   
}
int main()
{
	int num;
	
	cout<<"Enter a Positive Number : ";
	cin>>num;
	
	Prime(num);
	
	return 0;
}
