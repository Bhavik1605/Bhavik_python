#include<iostream>
using namespace std;

template<class T>

class Swap{
	public:
		T a,b,temp;
		
		void input()
		{
			cout<<"Enter 1st Value : ";
			cin>>a;
			cout<<"Enter 2nd Value : ";
			cin>>b;
		}
		
		void process()
		{
			temp=a;
			a=b;
			b=temp;
		}
		
		void display()
		{
			cout<<endl<<"After Swapping 1st Value is : "<<a<<endl;
			cout<<"After Swapping 2nd Value is : "<<b;
		}
};

int main()
{
	cout<<"----Swapping_Int_Value-------"<<endl;
	Swap<int>s1;
	s1.input();
	s1.process();
	s1.display();
	
	cout<<endl<<"\n----Swapping_Char_Value-------"<<endl;
	Swap<char>s2;
	s2.input();
	s2.process();
	s2.display();
	return 0;
}


