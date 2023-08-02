/* C++ program to Swap Values using call by reference */

#include<iostream>
using namespace std;

void swap(int &,int &);

int main()
{
    int a,b;

    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;

    cout<<"Before Swapping : a = "<<a<<"\tb = "<<b<<endl;
    swap(a,b);
    cout<<"After Swapping : a = "<<a<<"\tb = "<<b<<endl;

    return 0;
}

void swap(int & x,int & y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

