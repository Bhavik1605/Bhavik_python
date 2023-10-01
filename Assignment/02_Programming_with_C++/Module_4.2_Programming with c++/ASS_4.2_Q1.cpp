//simple calcultor using class and object

#include<iostream>
using namespace std;

class cal{
	
	private:
		float a,b;
	
	public:
		void sum()
		{
			cout<<"Enter first number : ";
			cin>>a;
			cout<<"Enter second number : ";
			cin>>b;
			
			cout<<endl<<"Total addition is : "<<a+b<<endl;
		}
		
		void sub()
		{
			cout<<"Enter first number : ";
			cin>>a;
			cout<<"Enter second number : ";
			cin>>b;
			
			cout<<endl<<"Total substraction is : "<<a-b<<endl;
		}
		
		void mul()
		{
			cout<<"Enter first number : ";
			cin>>a;
			cout<<"Enter second number : ";
			cin>>b;
			
			cout<<endl<<"Total multiplication is : "<<a*b<<endl;
		}
		
		void div()
		{
			cout<<"Enter first number : ";
			cin>>a;
			cout<<"Enter second number : ";
			cin>>b;
			
			cout<<endl<<"Total division is : "<<a/b<<endl;
		}
};

int main()
{
	cal c;
	
	cout<<"----------Addition----------\n";
	c.sum();
	cout<<"\n--------Substraction--------"<<endl;
	c.sub();
	cout<<"\n------Multiplication--------"<<endl;
	c.mul();
	cout<<"\n---------Division-----------"<<endl;
	c.div();
	
	return 0;
}
