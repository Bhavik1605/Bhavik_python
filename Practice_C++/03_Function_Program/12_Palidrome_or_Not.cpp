/*  C++ program to check number is palindrome or not using Function  */

#include<iostream>
using namespace std;

void rev(int n);

int main()
{
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    rev(n);
    
    return 0;
}

void rev(int n)
{
    int n1,ld,n2=0;
    n1=n;

    while(n>0)
    {
        ld=n%10;
        n2=(n2*10)+ld;
        n=n/10;
    }

    if(n1==n2)
    {
        cout<<endl<<"The Number [ "<<n1<<" ] is a Palindrome no."<<endl;
	}
    else
    {
        cout<<endl<<"The Number [ "<<n1<<" ] is NOT a Palindrome no.\n"<<endl;
	}
}
