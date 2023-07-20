/*  C++ Program to find Factorial of a Number using for loop  */

#include<iostream>
using namespace std;

int main()
{
    int i, n, fact=1;

    cout<<"Enter any positive number : ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<endl<<"Factorial of Number [ "<<n<<"! ] is : "<<fact;

    return 0;
}
