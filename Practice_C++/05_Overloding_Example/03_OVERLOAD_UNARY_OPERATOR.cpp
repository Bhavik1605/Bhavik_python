/* C++ program to overload unary operators that is increment and decrement */

#include<iostream>
using namespace std;

class overload{
	private:
		int a,b;
	public:
		void input()
		{
			cout<<"Enter First Number : ";
			cin>>a;
			cout<<"Enter Second Number : ";
			cin>>b;
		}
		
		void operator ++()
		{
			a++;
			b++;
		}
		
		void operator --()
		{
			a--;
			b--;
		}
		
		void display()
		{
			cout<<"A is : "<<a<<" & B is : "<<b<<endl;
		}
};

int main()
{
	overload o1;
	
	o1.input();
	++o1;
	
	cout<<endl<<"After Increment : ";
	o1.display();
	
	--o1;
	--o1;
	
	cout<<endl<<"After Decrement : ";
	o1.display();
	
	return 0;
}
