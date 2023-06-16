//program of making calculator using constructor.

#include<iostream>
using namespace std;

class add{
	public:
		float a,b;
		add()
		{
			cout<<"--------Addition----------\n";
			cout<<"Enter 1st value : ";
			cin>>a;
			cout<<"Enter 2nd value : ";
			cin>>b;
			cout<<"\nAddition of two number is : "<<a+b<<endl;
		}
};

class sub:public add{
	public:
		sub()
		{
			cout<<"\n------Substraction--------\n";
			cout<<"Enter 1st value : ";
			cin>>a;
			cout<<"Enter 2nd value : ";
			cin>>b;
			cout<<"\nSubstraction of two number is : "<<a-b<<endl;
		}
};

class mul:public sub{
	public:
		mul()
		{
			cout<<"\n-------Multiplication---------\n";
			cout<<"Enter 1st value : ";
			cin>>a;
			cout<<"Enter 2nd value : ";
			cin>>b;
			cout<<"\nMultiplication of two number is : "<<a*b<<endl;
		}
};

class div:public mul{
	public:
		div()
		{
			cout<<"\n----------Division------------\n";
			cout<<"Enter 1st value : ";
			cin>>a;
			cout<<"Enter 2nd value : ";
			cin>>b;
			cout<<"\nDivision of two number is : "<<a/b<<endl;
		}
};

int main()
{
	div d;
	
	return 0;
}
