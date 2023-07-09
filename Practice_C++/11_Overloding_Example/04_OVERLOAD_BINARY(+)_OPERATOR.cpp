/* C++ program to overload binary operator '+' to add two complex numbers. */

#include<iostream>
using namespace std;

class complax{
	private:
		int num1,num2;
	public:
		void get()
		{
			cout<<"Enter First Value for Real Number : ";
			cin>>num1;
			
			cout<<"Enter Second Value for Imaginary Number : ";
			cin>>num2;
		}
		
		complax operator +(complax obj1)
		{
			complax obj2;
			
			obj2.num1=num1+obj1.num1;
			obj2.num2=num2+obj1.num2;
			
			return obj2;
		}
		
		void display()
		{
			if(num2<0)
			{
				cout<<num1<<" "<<num2<<"i"<<endl;
			}
			else
			{
				cout<<num1<<" + "<<num2<<"i"<<endl;
			}
		}
};

int main()
{
	complax c1,c2,c3;
	
	cout<<"---------------First_Input_Numbers----------------------"<<endl;
	c1.get();
	
	cout<<endl<<"---------------Second_Input_Numbers---------------------"<<endl;
	c2.get();
	
	c3=c1+c2;
	
	cout<<endl<<"------------------Display_Data---------------------"<<endl;
	
	cout<<"Your First Real and Imaginary Number is : ";
	c1.display();
	
	cout<<endl<<"Your Second Real and Imaginary Number is : ";
	c2.display();
	
	cout<<endl<<"---------------------------------------------------"<<endl;
	cout<<"Addition of Real and Imaginary Numbers is : ";
	c3.display();
	
	return 0;
}
