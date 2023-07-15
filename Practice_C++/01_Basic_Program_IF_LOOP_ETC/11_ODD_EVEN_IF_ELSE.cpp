/*  C++ Program to Find whether given Number is Odd or Even  */

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter any positive number : ";
    cin>>a;

    if(a%2==0)
    {
       cout<<endl<<"The Entered Number [ "<<a<<" ] is EVEN Number.";
    }

    else
    {
        cout<<endl<<"The Entered Number [ "<<a<<" ] is ODD Number.";
    }

    return 0;
}
