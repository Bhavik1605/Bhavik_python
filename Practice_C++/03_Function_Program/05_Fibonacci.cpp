/* Program to print Fibonacci Series using function */

#include<iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0;
    int t2 = 1;
    int t3;
    
    cout<<endl<<"Fibonacci Series upto ["<<n<<"] Terms are : ";
    for (int i = 1; i <= n; i++)
	{
        cout<<t1<<" ";
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
	}
}
int main(){
	
    int n;
    
    cout<<"Enter Number of Terms of Fibonacci Series : ";
	cin>>n;
    
    fib(n);
    
    return 0;
}
