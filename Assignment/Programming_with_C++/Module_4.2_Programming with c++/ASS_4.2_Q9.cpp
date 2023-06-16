#include<iostream>
using namespace std;

class A{
	public:
		int a1[20];
		
		void array()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"Element No ["<<i+1<<"] : ";
				cin>>a1[i];
			}
		}
		
		void operator +(A obj)
		{
			for(int i=0;i<5;i++)
			{
				cout<<"["<<i+1<<"] element of two matrix : "<<a1[i]+obj.a1[i]<<endl;
			}
		}
};

int main()
{
	A a,b;
	
	cout<<"-------Input_for_1st_Matrix-------\n";
	a.array();
	
	cout<<"-------Input_for_2nd_Matrix-------\n";
	b.array();
	
	
	cout<<"\n------Addition of Two Matrix--------\n";
	a+b;
	
	return 0;
}
