//Mathamatics Operation of two number using different parameters and Function Overloading


#include<iostream>
using namespace std;

class cal{
	public:
		
		void add(double a,double b)
		{
			cout<<"-----Addition-------\n";
			cout<<"Enter 1st value : ";
			cin>>a;
	
			cout<<"Enter 2nd value : ";
			cin>>b;
	
			cout<<"\nTotal addition of two value is : "<<a+b<<endl;
		}
		
		void add(double a,double b,double c)
		{
			cout<<"\n-----Substraction-------\n";
			cout<<"Enter 1st value : ";
			cin>>a;
	
			cout<<"Enter 2nd value : ";
			cin>>b;
			
			cout<<"\nTotal Substraction of two value is : "<<a-b<<endl;
		}
		
		void add(double a,double b,double c,double d)
		{
			cout<<"\n------Multiplication-------\n";
			cout<<"Enter 1st value : ";
			cin>>a;
	
			cout<<"Enter 2nd value : ";
			cin>>b;
			
			cout<<"\nTotal Multiplication of two value is : "<<a*b<<endl;
		}
		
		void add(double a,double b,double c,double d,double e)
		{
			cout<<"\n------Division-------\n";
			cout<<"Enter 1st value : ";
			cin>>a;
	
			cout<<"Enter 2nd value : ";
			cin>>b;
			
			cout<<"\nTotal Division of two value is : "<<a/b;
		}
};
		
int main()
{
	double n1,n2;
	
	cal c1;
	
	c1.add(n1,n2);
	
	c1.add(n1,n2,0.0);
	
	c1.add(n1,n2,1.0,1.0);
	
	c1.add(n1,n2,1.0,1.0,1.0);

	
	return 0;
}
