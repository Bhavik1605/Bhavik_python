#include<iostream>
using namespace std;

class Num{
	private:
		int a,b;
		
	public:
		void input()
		{
			cout<<"Enter Value of a : ";
			cin>>a;
			cout<<"Enter Value of b : ";
			cin>>b;
		}
		friend void swap(Num &o1);
};

void swap(Num &o1)
{	
	o1.a=o1.a+o1.b;
	o1.b=o1.a-o1.b;
	o1.a=o1.a-o1.b;
	
	cout<<endl<<"After Swapping Value of a : "<<o1.a<<endl;
	cout<<"After Swapping Value of b : "<<o1.b;
}

int main()
{
	Num n1;
	
	n1.input();
	swap(n1);
	
	
	
	return 0;
}
