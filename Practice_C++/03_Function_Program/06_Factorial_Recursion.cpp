/* C++ Program to Find Factorial of a number using recursion */

#include<iostream>
using namespace std;

int fact(int n);

int main()
{
    int n;

    cout<<"Enter any positive integer : ";
    cin>>n;

    cout<<endl<<"Factorial of [ " << n << " ] is =  [ " << fact(n)<<" ]";

    return 0;
}

int fact(int n)
{
    if(n > 1)
    {
    	return n * fact(n - 1);
	}
    else
    {
    	return 1;
	}
}
