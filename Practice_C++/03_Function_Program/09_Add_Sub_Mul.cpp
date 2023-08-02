/*  C++ Program for Addition Subtraction Multiplication using function */

#include<iostream>
using namespace std;

int sum(int,int);
int sub(int,int);
int mul(int,int);

int res=0;

int main()
{
    int a,b,m,su,s;
    cout<<"Enter 1st number :: ";
    cin>>a;
    cout<<"Enter 2nd number :: ";
    cin>>b;

    s=sum(a,b);
    su=sub(a,b);
    m=mul(a,b);

    cout<<"Addition of two Numbers [ "<<a<<" + "<<b<<" ] = "<<s<<endl;
    cout<<"Subtraction of two Numbers [ "<<a<<" - "<<b<<" ] = "<<su<<endl;
    cout<<"Multiplication of two Numbers [ "<<a<<" * "<<b<<" ] = "<<m<<endl;

    return 0;
}

sum(int a,int b)
{
    res=a+b;
    return(res);
}

sub(int a,int b)
{
    res=a-b;
    return(res);
}

mul(int a,int b)
{
    res=a*b;
    return(res);
}

